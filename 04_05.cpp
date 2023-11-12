#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int avgScore;
    int evalScore;
    char isCadre;
    char isWestern;
    int paperCount;
    int scholarship;  // 学生获得的奖学金总数

    // 构造函数，初始化奖学金总数为0
    Student() : scholarship(0) {}
};

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    // 读取学生数据
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].avgScore >> students[i].evalScore
            >> students[i].isCadre >> students[i].isWestern >> students[i].paperCount;
    }

    // 计算每个学生获得的奖学金总数
    for (Student &student : students) {
        // 院士奖学金
        if (student.avgScore > 80 && student.paperCount >= 1) {
            student.scholarship += 8000;
        }
        // 五四奖学金
        if (student.avgScore > 85 && student.evalScore > 80) {
            student.scholarship += 4000;
        }
        // 成绩优秀奖
        if (student.avgScore > 90) {
            student.scholarship += 2000;
        }
        // 西部奖学金
        if (student.avgScore > 85 && student.isWestern == 'Y') {
            student.scholarship += 1000;
        }
        // 班级贡献奖
        if (student.evalScore > 80 && student.isCadre == 'Y') {
            student.scholarship += 850;
        }
    }

    // 找到获得最多奖学金的学生
    int maxScholarship = 0;
    string topStudent;

    for (const Student &student : students) {
        if (student.scholarship > maxScholarship) {
            maxScholarship = student.scholarship;
            topStudent = student.name;
        }
    }

    // 输出结果
    cout << topStudent << endl;
    cout << maxScholarship << endl;

    // 计算所有学生获得的奖学金总数
    int totalScholarship = 0;
    for (const Student &student : students) {
        totalScholarship += student.scholarship;
    }

    cout << totalScholarship << endl;

    return 0;
}
