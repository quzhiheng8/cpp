#include <iostream>

class Triangle {
private:
    double side1, side2, side3;

public:
    // 构造函数，使用三边长度进行初始化
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    // 判断三角形类型并打印结果
    void determineType() {
        if (side1 == side2 && side2 == side3) {
            std::cout << "等边三角形" << std::endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "等腰三角形" << std::endl;
        } else {
            std::cout << "不等边三角形" << std::endl;
        }
    }
};

int main() {
    // 数据输入
    double s1, s2, s3;
    std::cout << "请输入三角形的三边长度（用空格分隔）: ";
    std::cin >> s1 >> s2 >> s3;

    // 使用 Triangle 类生成对象并初始化三边长度
    Triangle myTriangle(s1, s2, s3);

    // 调用成员函数判断三角形类型并打印结果
    myTriangle.determineType();

    return 0;
}
