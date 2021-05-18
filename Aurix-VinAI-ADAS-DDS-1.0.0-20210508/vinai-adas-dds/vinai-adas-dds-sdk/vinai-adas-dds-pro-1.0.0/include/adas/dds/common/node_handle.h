/*
 * Copyright (c) 2020 - 2021, VinFast. All rights reserved. All information
 * information contained herein is proprietary and confidential to VinFast.
 * Any use, reproduction, or disclosure without the written permission
 * of VinFast is prohibited.
 */

#ifndef H_adas_dds_node_handle_rtidds
#define H_adas_dds_node_handle_rtidds

#include <iostream>
#include <string>
#include <functional>
#include <thread>
#include <signal.h>
#include <unistd.h>

#ifndef rti_me_cpp_hxx
#include "rti_me_cpp.hxx"
#endif

#include "wh_sm/wh_sm_history.h"
#include "rh_sm/rh_sm_history.h"
#include "dds_cpp/dds_cpp_dpde.hxx"
#include "dds_cpp/dds_cpp_wh_sm.hxx"
#include "dds_cpp/dds_cpp_rh_sm.hxx"
#include "dds_cpp/dds_cpp_netio.hxx"
#include "disc_dpde/disc_dpde_discovery_plugin.h"

#include <adas/dds/common/exception.h>
#include <adas/dds/common/log.h>
#include <adas/dds/common/node_param.h>

#include <adas/dds/idl/idl_includes.h>

namespace adas {

namespace dds {

// data reader callback type
template<typename T>
using datareader_callback = std::function<void(const T&)>;

// DataReaderListener class
template<typename T>
class DataReaderListener: public DDSDataReaderListener
{
public:
    /*  
     *  @brief DataReaderListener constructor
     *
     *  @[in] cb
     *
     */
    DataReaderListener(datareader_callback<T> cb)
    : m_callback(cb)
    {
    }

    /*  
     *  @brief DataReaderListener destructor
     *
     *  @[in] cb
     *
     */
    virtual ~DataReaderListener() = default;

    /*  
     *  @brief on_data_available listener callback function
     *
     *  @[in] reader
     *
     *  @return void
     */
    virtual void on_data_available(DDSDataReader* reader)
    {
        typename T::DataReader *datareader = T::DataReader::narrow(reader);
        typename T::Seq data_seq;
        DDS_SampleInfoSeq info_seq;

        DDS_ReturnCode_t retcode = datareader->take(
                        data_seq, info_seq, DDS_LENGTH_UNLIMITED,
                        DDS_ANY_SAMPLE_STATE, DDS_ANY_VIEW_STATE,
                        DDS_ANY_INSTANCE_STATE);

        if (retcode == DDS_RETCODE_OK)
        {
            for (int i=0; i<data_seq.length(); i++)
            {
                if (info_seq[i].valid_data)
                {
                    if (m_callback)
                        m_callback(data_seq[i]);
                }
            }
            datareader->return_loan(data_seq, info_seq);
        }
    }

private:
    datareader_callback<T> m_callback;
};

// SubscriberListener class
class SubscriberListener : public DDSSubscriberListener
{
public:
    /*  
     *  @brief DataReaderListener constructor
     *
     */
    SubscriberListener();

    /*  
     *  @brief DataReaderListener destructor
     *
     */
    ~SubscriberListener();

    /*  
     *  @brief on_subscription_matched listener callback function
     *
     *  @[in] reader
     *  @[in] status
     *
     *  @return void
     */
    virtual void on_subscription_matched(DDSDataReader* reader,
                                         const DDS_SubscriptionMatchedStatus& status);
};

// Subscriber class
class Subscriber
{
public:
    /*  
     *  @brief Subscriber constructor
     *
     */
    Subscriber();

    /*  
     *  @brief Subscriber destructor
     *
     */
    ~Subscriber();

    Subscriber(const Subscriber& sub) = delete;
    Subscriber& operator=(const Subscriber& other) = delete;

    Subscriber(Subscriber& sub);
    Subscriber(Subscriber&& sub);
    Subscriber& operator=(Subscriber&& other);

    /*  
     *  @brief create a subscriber
     *
     *  @[in] topic
     *  @[in] datareader
     *
     *  @return Subscriber
     */
    static Subscriber create(DDSTopic* topic, DDSDataReader* datareader);

    /*  
     *  @brief read data from data reader
     *
     *  @[out] data
     *
     *  @return 0 for success, otherwise failure
     */
    template<typename T>
    int read(T& data)
    {
        typename T::DataReader *datareader = T::DataReader::narrow(m_datareader);
        DDS_SampleInfo info;

        DDS_ReturnCode_t retcode = datareader->take_next_sample(data, info);

        return retcode;
    }

private:
    DDSSubscriber* m_subscriber;
    DDSTopic* m_topic;
    DDSDataReader* m_datareader;
};

// PublisherListener class
class PublisherListener : public DDSPublisherListener
{
public:
    /*  
     *  @brief PublisherListener constructor
     *
     */
    PublisherListener();

    /*  
     *  @brief PublisherListener destructor
     *
     */
    ~PublisherListener();

    /*  
     *  @brief on_publication_matched listener callback function
     *
     *  @[in] writer
     *  @[in] status
     *
     *  @return void
     */
    virtual void on_publication_matched(DDSDataWriter* writer,
                                        const DDS_PublicationMatchedStatus& status);
};

// Publisher class
class Publisher
{
public:
    /*  
     *  @brief Publisher constructor
     *
     */
    Publisher();

    /*  
     *  @brief Publisher destructor
     *
     */
    ~Publisher();

    Publisher(const Publisher& pub) = delete;
    Publisher& operator=(const Publisher& other) = delete;

    Publisher(Publisher& pub);
    Publisher(Publisher&& pub);
    Publisher& operator=(Publisher&& other);

    /*  
     *  @brief create a publisher
     *
     *  @[in] topic
     *  @[in] datawriter
     *
     *  @return Publisher
     */
    static Publisher create(DDSTopic* topic, DDSDataWriter* datawriter);

    /*  
     *  @brief publisher data using data writer
     *
     *  @[in] data
     *
     *  @return 0 for success, otherwise failure
     */
    template<typename T>
    int publish(const T& data)
    {
        typename T::DataWriter *datawriter = T::DataWriter::narrow(m_datawriter);
        DDS_ReturnCode_t retcode = datawriter->write(data, DDS_HANDLE_NIL);
        return retcode;
    }

    template<typename T>
    T* get_loan() {
        if(m_datawriter == NULL) {
            return NULL;
        }
        typename T::DataWriter *datawriter = T::DataWriter::narrow(m_datawriter);
        T* instance;
        DDS_ReturnCode_t retcode =  datawriter->get_loan(instance);
        if(retcode != DDS_RETCODE_OK) {
            return NULL;
        }
        return instance;
    }

private:
    DDSTopic* m_topic;
    DDSDataWriter* m_datawriter;
};

// NodeHandle class
class NodeHandle : public NodeParams
{
public:
    /*  
     *  @brief NodeHandle constructor
     *
     *  @[in] domain_id
     *  @[in] listener
     *  @[in] user_params
     *
     */    
    explicit NodeHandle(int domain_id = 0,
                        DDSDomainParticipantListener *listener = nullptr,
                        void *user_params = nullptr);

    /*  
     *  @brief NodeHandle destructor
     *
     */
    ~NodeHandle();

    NodeHandle(const NodeHandle& pub) = delete;
    NodeHandle& operator=(const NodeHandle& other) = delete;

    /*  
     *  @brief subscribe a topic
     *
     *  @[in] topic_name
     *  @[in] queue_size
     *  @[in] cb
     *  @[in] user_params
     *
     *  @return Subscriber
     */
    template<typename T>
    Subscriber subscribe(const std::string& topic_name,
                         uint32_t queue_size,
                         datareader_callback<T> cb = nullptr,
                         void *user_params = nullptr)
    {
        T::TypeSupport::register_type(
                            m_participant,
                            T::TypeSupport::get_type_name());

        DDSDataReaderListener *datareader_listener = nullptr;
        if (cb)
            datareader_listener = new DataReaderListener<T>(cb);

        return subscribe_priv(topic_name,
                               T::TypeSupport::get_type_name(),
                               queue_size,
                               datareader_listener,
                               user_params);
    }

    /*  
     *  @brief advertise a topic
     *
     *  @[in] topic_name
     *  @[in] queue_size
     *  @[in] user_params
     *
     *  @return Publisher
     */
    template<typename T>
    Publisher advertise(const std::string& topic_name,
                        uint32_t queue_size,
                        void *user_params = nullptr)
    {
        T::TypeSupport::register_type(
                            m_participant,
                            T::TypeSupport::get_type_name());

        return advertise_priv(topic_name,
                               T::TypeSupport::get_type_name(),
                               queue_size,
                               user_params);
    }

    /*  
     *  @brief get participant pointer
     *
     *  @return DDSDomainParticipant *
     */
    inline DDSDomainParticipant * get_participant() const
    {
        return m_participant; 
    }

private:
    /*  
     *  @brief create a participant
     *
     *  @[in] domain_id
     *  @[in] user_params
     *
     *  @return void
     */
    void create_participant(int domain_id, void *user_params);

    /*  
     *  @brief subscribe a topic
     *
     *  @[in] topic_name
     *  @[in] type_name
     *  @[in] queue_size
     *  @[in] datareader_listener
     *  @[in] user_params
     *
     *  @return Subscriber
     */
    Subscriber subscribe_priv(const std::string& topic_name,
                              const std::string& type_name,
                              uint32_t queue_size,
                              DDSDataReaderListener *datareader_listener,
                              void *user_params);

    /*  
     *  @brief advertise a topic
     *
     *  @[in] topic_name
     *  @[in] type_name
     *  @[in] queue_size
     *  @[in] user_params
     *
     *  @return Publisher
     */
    Publisher advertise_priv(const std::string& topic_name,
                             const std::string& type_name,
                             uint32_t queue_size,
                             void *user_params);

    /*  
     *  @brief shutdown dds, release resources
     *
     *  @return void
     */
    void shutdown();

private:
    int m_domain_id;
    DDSDomainParticipant *m_participant;
    DDSDomainParticipantListener *m_listener;

    DDSPublisher* m_publisher;
    DDSSubscriber* m_subscriber;
};

} // dds

} // adas

#endif // H_adas_dds_node_handle_rtidds
