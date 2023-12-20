#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    // 加载图像
    Mat originalImage = imread("/Users/qzh/Documents/c++/materials/P1058738.JPG"); // 替换为实际图像的路径
    if (originalImage.empty()) {
        cout << "无法加载图像" << endl;
        return -1;
    }

    // (1) 检测图像边缘
    Mat edges;
    Canny(originalImage, edges, 50, 150);

    // (2) 膨胀操作
    Mat dilatedImage;
    dilate(edges, dilatedImage, Mat(), Point(-1, -1), 2);

    // (3) 侵蚀操作
    Mat erodedImage;
    erode(edges, erodedImage, Mat(), Point(-1, -1), 2);

    // (4) 改变图像大小，缩放为50%
    Mat resizedImage;
    resize(originalImage, resizedImage, Size(), 0.5, 0.5);

    // 显示原始图像和处理后的图像
    namedWindow("Original Image", WINDOW_NORMAL);
    imshow("Original Image", originalImage);

    namedWindow("Edges", WINDOW_NORMAL);
    imshow("Edges", edges);

    namedWindow("Dilated Image", WINDOW_NORMAL);
    imshow("Dilated Image", dilatedImage);

    namedWindow("Eroded Image", WINDOW_NORMAL);
    imshow("Eroded Image", erodedImage);

    namedWindow("Resized Image", WINDOW_NORMAL);
    imshow("Resized Image", resizedImage);

    waitKey(0);

    return 0;
}
