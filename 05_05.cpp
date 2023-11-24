#include <iostream>
#include <cmath>

class Shape {
public:
    // 虚函数，用于计算面积
    virtual double calculateArea() const = 0;

    // 虚函数，用于计算周长
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    // 构造函数，使用半径进行初始化
    Circle(double r) : radius(r) {}

    // 重写虚函数，计算圆的面积
    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // 重写虚函数，计算圆的周长
    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    // 构造函数，使用长和宽进行初始化
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // 重写虚函数，计算矩形的面积
    double calculateArea() const override {
        return length * width;
    }

    // 重写虚函数，计算矩形的周长
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    // 构造函数，使用三边长度进行初始化
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // 重写虚函数，计算三角形的面积
    double calculateArea() const override {
        // 使用海伦公式计算面积
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // 重写虚函数，计算三角形的周长
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // 新建 Circle 对象并初始化半径
    Circle myCircle(5.0);

    // 计算并输出圆的面积和周长
    std::cout << "圆的面积: " << myCircle.calculateArea() << std::endl;
    std::cout << "圆的周长: " << myCircle.calculatePerimeter() << std::endl;

    // 新建 Rectangle 对象并初始化长和宽
    Rectangle myRectangle(4.0, 3.0);

    // 计算并输出矩形的面积和周长
    std::cout << "矩形的面积: " << myRectangle.calculateArea() << std::endl;
    std::cout << "矩形的周长: " << myRectangle.calculatePerimeter() << std::endl;

    // 新建 Triangle 对象并初始化三边长度
    Triangle myTriangle(3.0, 4.0, 5.0);

    // 计算并输出三角形的面积和周长
    std::cout << "三角形的面积: " << myTriangle.calculateArea() << std::endl;
    std::cout << "三角形的周长: " << myTriangle.calculatePerimeter() << std::endl;

    return 0;
}
