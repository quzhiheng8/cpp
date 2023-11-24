#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // 构造函数，用于初始化半径
    Circle(double r) {
        radius = r;
    }

    // 计算圆的面积
    double calculateArea() {
        return M_PI * radius * radius;
    }

    // 计算圆的周长
    double calculatePerimeter() {
        return 2 * M_PI * radius;
    }
};

int main() {
    // 使用 Circle 类生成对象并初始化半径
    Circle myCircle(5.0);

    // 调用成员函数计算面积和周长
    double area = myCircle.calculateArea();
    double perimeter = myCircle.calculatePerimeter();

    // 输出结果
    std::cout << "圆的面积: " << area << std::endl;
    std::cout << "圆的周长: " << perimeter << std::endl;

    return 0;
}
