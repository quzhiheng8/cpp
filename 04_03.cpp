#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b; // 输入两个正整数a和b

    double base = stod(a); // 将a转换为双精度浮点数
    double target = stod(b); // 将b转换为双精度浮点数
    double x = 0;

    while (pow(base, x) <= target) {
        x++; // 递增x，直到满足条件
    }

    cout << x - 1 << endl; // 输出x，减去1以满足题目的要求

    return 0;
}
