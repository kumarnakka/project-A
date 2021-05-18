#ifdef VINAI_ADAS_DDS_PRO
#include <adas/dds/common/node_handle_pro.h>
#else
#include <adas/dds/common/node_handle.h>
#endif

#include <sys/time.h>

#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>
#include <ratio>
#include <vector>

uint8_t* rcvBuffer1;
uint8_t* rcvBuffer2;
uint8_t* rcvBuffer3;
uint8_t* rcvBuffer4;
uint8_t* rcvBuffer5;
uint8_t* rcvBuffer6;
uint8_t* rcvBuffer7;
uint8_t* rcvBuffer8;

int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;

int interval = 1;

void camera_image1_callback(const adas::dds::CameraImage& sample)
{
    count1++;
    if(count1%interval == 0)
    {
        LOG(INFO) << "camera_image1_callback " << count1 << std::endl;
    }
    memcpy(rcvBuffer1, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image2_callback(const adas::dds::CameraImage& sample)
{
    count2++;
    if(count2%interval == 0) {
        LOG(INFO) << "camera_image2_callback " << count2 << std::endl;
    }
    memcpy(rcvBuffer2, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image3_callback(const adas::dds::CameraImage& sample)
{
    count3++;
    if(count3%interval == 0) {
        LOG(INFO) << "camera_image3_callback " << count3 << std::endl;
    }
    memcpy(rcvBuffer3, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image4_callback(const adas::dds::CameraImage& sample)
{
    count4++;
    if(count4%interval == 0) {
        LOG(INFO) << "camera_image4_callback " << count4 << std::endl;
    }
    memcpy(rcvBuffer4, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image5_callback(const adas::dds::CameraImage& sample)
{
    count5++;
    if(count5%interval == 0)
    {
        LOG(INFO) << "camera_image5_callback " << count5 << std::endl;
    }
    memcpy(rcvBuffer5, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image6_callback(const adas::dds::CameraImage& sample)
{
    count6++;
    if(count6%interval == 0) {
        LOG(INFO) << "camera_image6_callback " << count6 << std::endl;
    }
    memcpy(rcvBuffer6, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image7_callback(const adas::dds::CameraImage& sample)
{
    count7++;
    if(count7%interval == 0) {
        LOG(INFO) << "camera_image7_callback " << count7 << std::endl;
    }
    memcpy(rcvBuffer7, sample.data, 1920*1208*3*sizeof(uint8_t));
}

void camera_image8_callback(const adas::dds::CameraImage& sample)
{
    count8++;
    if(count8%interval == 0) {
        LOG(INFO) << "camera_image8_callback " << count8 << std::endl;
    }
    memcpy(rcvBuffer8, sample.data, 1920*1208*3*sizeof(uint8_t));
}

int main(int argc, char** argv) {
    LOG(INFO) << "Camera Sub Example Start" << std::endl;
    adas::dds::NodeHandle nh(0);
    
    adas::dds::Subscriber sub1;
    adas::dds::Subscriber sub2;
    adas::dds::Subscriber sub3;
    adas::dds::Subscriber sub4;
    adas::dds::Subscriber sub5;
    adas::dds::Subscriber sub6;
    adas::dds::Subscriber sub7;
    adas::dds::Subscriber sub8;

    nh.init_params(argc, argv);

    rcvBuffer1 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer2 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer3 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer4 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer5 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer6 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer7 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));
    rcvBuffer8 = (uint8_t*) std::malloc(1920*1208*3*sizeof(uint8_t));

    sub1 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/tricam_narrow", 1, camera_image1_callback);
    sub2 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/tricam_main", 1, camera_image2_callback);
    sub3 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/tricam_wide", 1, camera_image3_callback);
    sub4 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/side_fl", 1, camera_image4_callback);
    sub5 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/side_fr", 1, camera_image5_callback);
    sub6 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/side_rl", 1, camera_image6_callback);
    sub7 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/side_rr", 1, camera_image7_callback);
    sub8 = nh.subscribe<adas::dds::CameraImage>("/adas/sensors/camera/rear", 1, camera_image8_callback);

    int sample_count = 0;
    using namespace std::chrono;

    LOG(INFO) << "Start loop" << std::endl;
    for (int count = 0; sample_count == 0 ; ++count) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 / 33));
    }
    return 0;
}
