#include <iostream>
#include <cmath> // 用于sqrt函数
using namespace std;


int main() {
    cout << "200到300之间的质数有：" << endl;

    for (int num = 200; num <= 300; num++) {  //如果存在两个整数因子a和b，其中a <= b，且它们的乘积等于一个数n（a * b = n），那么a和b中必有一个小于等于n的平方根，所以只需要计算平方根取整及之前的整数即可
        bool isPrime = true;

        // 判断是否为质数
        for (int i = 2; i <= sqrt(num); i++) { 
            if (num % i == 0) {   //判断能否整除
                isPrime = false;
                break;
            }
        }

        // 输出质数
        if (isPrime && num > 1) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
