#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // (1) 加载并显示一张图像
    Mat image = imread("/Users/qzh/Documents/c++/materials/P1058738.JPG"); // 可以替换为实际图像的路径
    if (image.empty()) {
        cout << "无法加载图像" << endl;
        return -1;
    }
    imshow("Image", image);
    waitKey(0);

    // (2) 加载一个视频
    VideoCapture video("/Users/qzh/Documents/c++/materials/test.mp4"); // 可以替换为实际视频的路径
    if (!video.isOpened()) {
        cout << "无法打开视频" << endl;
        return -1;
    }

    while (true) {
        Mat frame;
        video >> frame;
        if (frame.empty()) {
            cout << "视频播放结束" << endl;
            break;
        }

        imshow("Video", frame);
        char key = waitKey(30); // 等待30毫秒

        if (key == 27) { // 按下Esc键退出
            break;
        }
    }

    // (3) 开启计算机摄像头
    VideoCapture webcam(0); // 0表示默认摄像头git 
    if (!webcam.isOpened()) {
        cout << "无法打开摄像头" << endl;
        return -1;
    }

    while (true) {
        Mat frame;
        webcam >> frame;
        if (frame.empty()) {
            cout << "无法从摄像头获取图像" << endl;
            break;
        }

        imshow("Webcam", frame);
        char key = waitKey(30); // 等待30毫秒

        if (key == 27) { // 按下Esc键退出
            break;
        }
    }

    return 0;
}
