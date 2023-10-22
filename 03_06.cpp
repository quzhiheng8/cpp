#include <iostream>
#include <cmath>

using namespace std;  // 引入std命名空间

int main() {
    double a, b, c;
    cout << "请输入一元二次方程的系数 (a, b, c): ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "a不能为0，不是一元二次方程" << endl;
    } else {
        double D = b * b - 4 * a * c;

        if (D < 0) {
            cout << "无实根" << endl;
        } else if (D == 0) {
            double x1 = -b / (2 * a);
            cout << "两个相同实根，根为 " << x1 << endl;
        } else {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "两个不同实根，根分别为 " << x1 << " 和 " << x2 << endl;
        }
    }

    return 0;
}
