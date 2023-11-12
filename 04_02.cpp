#include <iostream>
#include <vector>
using namespace std;

// 递归函数用于计算第a个菲波那契数
int fibonacci(int a) {
    if (a == 1 || a == 2) {
        return 1;
    } else {
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}

int main() {
    int n;
    cin >> n; // 输入测试数据的组数

    vector<int> inputs; // 保存所有输入的正整数a
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        inputs.push_back(a); // 将a添加到输入数组
    }

    vector<int> results; // 保存所有计算的结果
    for (int a : inputs) {
        int result = fibonacci(a); // 计算第a个菲波那契数
        results.push_back(result); // 将结果添加到结果数组
    }

    // 一次性输出所有结果
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
