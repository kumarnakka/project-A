#ifdef VINAI_ADAS_DDS_PRO
#include <adas/dds/common/node_handle_pro.h>
#else
#include <adas/dds/common/node_handle.h>
#endif

int main(int argc, const char *argv[])
{
    LOG(INFO) << "Topic: /adas/helloworld - data type: adas::dds::HelloWorld" << std::endl;
    adas::dds::NodeHandle nh(0);
    adas::dds::Publisher pub;

    nh.init_params(argc, argv);

    int count = 0, id = 0, data_size = 0;
    nh.getParam<int>("count", count, 0);
    nh.getParam<int>("id", id, 0);
    nh.getParam<int>("size", data_size, 4);

    pub = nh.advertise<adas::dds::HelloWorld>("/adas/helloworld", 1);
    adas::dds::HelloWorld *sample = adas::dds::HelloWorldTypeSupport::create_data();
    DDS_OctetSeq_set_length(&sample->data, data_size);
    if (data_size > 0)
        sample->data[0] = '0';

    for (int i=0; count == 0 || i<count; i++)
    {
        sample->id = id;
        sprintf(sample->msg, "Hello World %d", i);

        if (data_size > 0)
        {
            sample->data[0]++;
            if (sample->data[0] >= 'z')
                sample->data[0] = '0';
        }

        LOG(INFO) << "id=" << sample->id << ", "
                  << "msg=" << sample->msg << ", "
                  << "data[0] = " << (char)((data_size>0)? sample->data[0] : '@')
                  << std::endl;

        pub.publish(*sample);

        std::this_thread::sleep_for(std::chrono::milliseconds(34));
    }

    adas::dds::HelloWorldTypeSupport::delete_data(sample);

    return 0;
}
