#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "请输入第一个整数: ";
    cin >> num1;

    cout << "请输入第二个整数: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "第一个整数大于第二个整数" << endl;
    } else if (num1 < num2) {
        cout << "第一个整数小于第二个整数" << endl;
    } else {
        cout << "两个整数相等" << endl;
    }

    return 0;
}
