#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>

#include "android/native_window_jni.h"
#include "android/native_window.h"


using namespace cv;
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_example_zhipingwang_opencv_1demo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    cv::Mat mat(20,20,CV_8UC1);
    std::string hello = "Hello from C++"+mat.rows;
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_example_zhipingwang_opencv_1demo_Main2Activity_convertBitMap(JNIEnv *env, jclass type,
                                                                      jbyteArray bytes_) {
    jbyte *bytes = env->GetByteArrayElements(bytes_, NULL);
    jsize len = env->GetArrayLength(bytes_);

    cv::Mat mat(100,100,CV_8SC4);
    memcpy(mat.data,bytes,len);




    // TODO

    env->ReleaseByteArrayElements(bytes_, bytes, 0);
}extern "C"
JNIEXPORT void JNICALL
Java_com_example_zhipingwang_opencv_1demo_Main2Activity_render(JNIEnv *env, jclass type,
                                                               jobject surface) {

    // TODO

}