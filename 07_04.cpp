#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// 全局变量用于存储用户调整的亮度和对比度值
int brightnessValue = 50;
int contrastValue = 50;

// 回调函数，用于调整图像的亮度和对比度
void onTrackbar(int, void* userdata) {
    Mat* image = reinterpret_cast<Mat*>(userdata);

    // 计算亮度和对比度的调整参数
    double alpha = contrastValue / 50.0;
    double beta = brightnessValue - 50;

    // 调整图像的亮度和对比度
    Mat adjustedImage = Mat::zeros(image->size(), image->type());
    image->convertTo(adjustedImage, -1, alpha, beta);

    // 显示调整后的图像
    imshow("Adjusted Image", adjustedImage);
}

int main() {
    // 加载图像
    Mat originalImage = imread("/Users/qzh/Documents/c++/materials/P1058738.JPG"); // 替换为实际图像的路径
    if (originalImage.empty()) {
        cout << "无法加载图像" << endl;
        return -1;
    }

    // 创建调整后图像的窗口
    namedWindow("Adjusted Image", WINDOW_NORMAL);

    // 创建滑动条
    createTrackbar("Brightness", "Adjusted Image", &brightnessValue, 100, onTrackbar, &originalImage);
    createTrackbar("Contrast", "Adjusted Image", &contrastValue, 100, onTrackbar, &originalImage);

    // 初始调整一次
    onTrackbar(0, &originalImage);


    // 等待用户按下任意键退出
    waitKey(0);

    return 0;
}
