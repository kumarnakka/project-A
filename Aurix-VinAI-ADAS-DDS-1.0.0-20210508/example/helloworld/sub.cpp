#ifdef VINAI_ADAS_DDS_PRO
#include <adas/dds/common/node_handle_pro.h>
#else
#include <adas/dds/common/node_handle.h>
#endif

#include <iostream>
#include <mutex>

void helloworld_callback(const adas::dds::HelloWorld& sample)
{
    char ch='@';
    if (DDS_OctetSeq_get_length(&sample.data) > 0)
        ch = sample.data[0];

    LOG(INFO) << "id=" << sample.id << ", "
              << "msg=" << sample.msg << ", "
              << "data[0] = " << ch
              << std::endl;
}

int main(int argc, char *argv[])
{
    LOG(INFO) << "Topic: /adas/helloworld - data type: adas::dds::HelloWorld" << std::endl;
    adas::dds::NodeHandle nh(0);
    adas::dds::Subscriber sub;
    adas::dds::Subscriber sub2;

    nh.init_params(argc, argv);

    int count = 0;
    nh.getParam<int>("count", count, 0);

    sub = nh.subscribe<adas::dds::HelloWorld>("/adas/helloworld", 1, helloworld_callback);

    for (int i=0; count == 0 || i < count; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}
