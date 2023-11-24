#include <iostream>

class Point {
private:
    double x, y;

public:
    // 构造函数，使用点坐标进行初始化
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    // 显示点坐标
    void display() {
        std::cout << "点坐标: (" << x << ", " << y << ")" << std::endl;
    }

    // 更改点坐标
    void changeCoordinates(double newX, double newY) {
        x = newX;
        y = newY;
    }
};

class Rectangle : public Point {
private:
    double length, width;

public:
    // 构造函数，使用点坐标、长、宽进行初始化
    Rectangle(double xCoord, double yCoord, double len, double wid) : Point(xCoord, yCoord) {
        length = len;
        width = wid;
    }

    // 计算矩形面积
    double calculateArea() {
        return length * width;
    }

    // 计算矩形周长
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // 使用 Point 类生成对象并初始化点坐标
    Point myPoint(2.0, 3.0);

    // 显示点坐标
    std::cout << "Point对象的初始坐标：" << std::endl;
    myPoint.display();

    // 更改点坐标
    myPoint.changeCoordinates(4.0, 5.0);
    std::cout << "Point对象的修改后坐标：" << std::endl;
    myPoint.display();

    // 使用 Rectangle 类生成对象并初始化点坐标、长、宽
    Rectangle myRectangle(1.0, 1.0, 4.0, 3.0);

    // 计算矩形面积和周长
    double area = myRectangle.calculateArea();
    double perimeter = myRectangle.calculatePerimeter();

    // 输出结果
    std::cout << "矩形的面积: " << area << std::endl;
    std::cout << "矩形的周长: " << perimeter << std::endl;

    return 0;
}
