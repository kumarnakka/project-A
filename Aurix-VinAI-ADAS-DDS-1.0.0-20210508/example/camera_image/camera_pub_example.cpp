#ifdef VINAI_ADAS_DDS_PRO
#include <adas/dds/common/node_handle_pro.h>
#else
#include <adas/dds/common/node_handle.h>
#endif

#include <sys/time.h>

#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <ratio>
#include <vector>

void autoGenImage(adas::dds::CameraImage* msg, int length) {
    //TODO: adjust data of msg or input image.
    //Currently, default is dummy.
}

int main(int argc, char** argv) {
    adas::dds::NodeHandle nh(0);
    std::vector<std::string> topic_list;
    topic_list.push_back("/adas/sensors/camera/tricam_narrow");
    topic_list.push_back("/adas/sensors/camera/tricam_main");
    topic_list.push_back("/adas/sensors/camera/tricam_wide");
    topic_list.push_back("/adas/sensors/camera/side_fl");
    topic_list.push_back("/adas/sensors/camera/side_fr");
    topic_list.push_back("/adas/sensors/camera/side_rl");
    topic_list.push_back("/adas/sensors/camera/side_rr");
    topic_list.push_back("/adas/sensors/camera/rear");

    int kWidth = 1920;
    int kHeight = 1208;
    int kImageSize = kWidth * kHeight * 3;
    adas::dds::CameraImage* msg = new adas::dds::CameraImage();

    std::vector<adas::dds::Publisher*> publisher_list;
    //Init DDS publisher
    for (int i = 0; i < (int)topic_list.size(); i++) {
        std::string m_topic = topic_list.at(i);
        adas::dds::Publisher* m_publisher = new adas::dds::Publisher();
        *m_publisher = nh.advertise<adas::dds::CameraImage>(m_topic, 1);
        publisher_list.push_back(m_publisher);
    }
    int count_frame = 0;
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    int interval = 33;
    int sleeping;
    int result;
    // loop
    while (true) {
        std::chrono::high_resolution_clock::time_point start_point = std::chrono::high_resolution_clock::now();
        std::chrono::high_resolution_clock::time_point end_point = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> delta = (end_point - start_point);

        adas::dds::CameraImage* instance = NULL;

        for (int i = 0; i < (int)publisher_list.size(); i++) {
            adas::dds::Publisher* m_publisher = publisher_list.at(i);
            instance = m_publisher->get_loan<adas::dds::CameraImage>();
            if (instance == NULL) {
                instance = msg;
            }
            autoGenImage(instance, kImageSize);
            instance->width = kWidth;
            instance->height = kHeight;
            result = m_publisher->publish(*instance);
            LOG(INFO) << "Publisher index " << i << " result: " << result << std::endl;
        }

        LOG(INFO) << "DDS publish DONE " << std::endl;
        end_point = std::chrono::high_resolution_clock::now();
        delta = (end_point - start_point);
        sleeping = 1000 / interval - (int)delta.count();
        LOG(INFO) << "DDS push Image Runtime " << delta.count() << std::endl;

        count_frame++;
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        duration<double, std::milli> time_span = t2 - t1;
        LOG(INFO) << "FPS: " << count_frame / (time_span.count() / 1000) << " fps. count_frame = "
                  << count_frame << std::endl;
        if (sleeping < 0) {
            continue;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(sleeping));
    }
    return 0;
}
