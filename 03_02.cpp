#include <iostream>
using namespace std;

int main() {
    int num;
    int reversedNum = 0;
    int digitCount = 0;

    cout << "请输入一个整数: ";
    cin >> num;

    if (num == 0) {
        cout << "反向输出: 0" << endl;
        cout << "位数: 1" << endl;
        return 0;
    }

    do {
        int lastDigit = num % 10;  // 获取最后一位
        reversedNum = reversedNum * 10 + lastDigit;  // 将最后一位添加到反向数字
        num /= 10;  // 去掉最后一位
        digitCount++;
    } while (num != 0);

    cout << "反向输出: " << reversedNum << endl;
    cout << "位数: " << digitCount << endl;

    return 0;
}
