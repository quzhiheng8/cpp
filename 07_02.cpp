#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // 加载图像
    Mat originalImage = imread("/Users/qzh/Documents/c++/materials/P1058738.JPG"); // 可以替换为实际图像的路径
    if (originalImage.empty()) {
        cout << "无法加载图像" << endl;
        return -1;
    }

    // (1) 将图像转换为灰度图
    Mat grayImage;
    cvtColor(originalImage, grayImage, COLOR_BGR2GRAY);

    // (2) 将灰度图像二值化
    Mat binaryImage;
    threshold(grayImage, binaryImage, 128, 255, THRESH_BINARY);

    // (3) 高斯模糊处理
    Mat blurredImage;
    GaussianBlur(grayImage, blurredImage, Size(5, 5), 0);

    // 显示原始图像和处理后的图像
    namedWindow("Original Image", WINDOW_NORMAL);
    imshow("Original Image", originalImage);

    namedWindow("Gray Image", WINDOW_NORMAL);
    imshow("Gray Image", grayImage);

    namedWindow("Binary Image", WINDOW_NORMAL);
    imshow("Binary Image", binaryImage);

    namedWindow("Blurred Image", WINDOW_NORMAL);
    imshow("Blurred Image", blurredImage);

    waitKey(0);

    return 0;
}
