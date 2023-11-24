#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string className;
    int studentID;
    double score;
    static int count;  // 静态变量，用于统计对象总数

public:
    // 构造函数，使用姓名、班级、学号、分数进行初始化
    Student(const std::string& n, const std::string& cls, int id, double s) {
        name = n;
        className = cls;
        studentID = id;
        score = s;
        count++;  // 新建对象时增加对象总数
    }

    // 显示学生信息和成绩
    void displayInfo() {
        std::cout << "姓名: " << name << std::endl;
        std::cout << "班级: " << className << std::endl;
        std::cout << "学号: " << studentID << std::endl;
        std::cout << "分数: " << score << std::endl;

        // 根据分数输出成绩
        if (score >= 90.0) {
            std::cout << "成绩: A" << std::endl;
        } else if (score >= 80.0) {
            std::cout << "成绩: B" << std::endl;
        } else if (score >= 70.0) {
            std::cout << "成绩: C" << std::endl;
        } else {
            std::cout << "成绩: D" << std::endl;
        }
    }

    // 获取对象总数
    static int getCount() {
        return count;
    }
};

// 初始化静态变量
int Student::count = 0;

int main() {
    // 使用 Student 类生成对象并初始化学生信息
    Student student1("张三", "ClassA", 1001, 85.5);
    Student student2("李四", "ClassB", 1002, 92.0);
    Student student3("王五", "ClassC", 1003, 78.5);

    // 显示学生信息
    std::cout << "学生信息：" << std::endl;
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();

    // 输出对象总数
    std::cout << "学生对象总数: " << Student::getCount() << std::endl;

    return 0;
}
