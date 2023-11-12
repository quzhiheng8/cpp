#include <iostream>
using namespace std;

// 定义Hanoi函数，用于将n个盘子从src杆移动到dest杆，借助mid杆
void Hanoi(int n, char src, char mid, char dest);

int main() {
    int n;
    char A, B, C;

    // 提示用户输入盘子的数量和三个杆子的标识
    cin >> n >> A >> B >> C;

    // 调用Hanoi函数解决汉诺塔问题
    Hanoi(n, A, B, C);

    return 0;
}

// Hanoi函数的实现
void Hanoi(int n, char src, char mid, char dest) {
    if (n == 1) {
        // 如果只有一个盘子，直接将它从src移动到dest并输出移动记录
        cout << n << ":" << src << "->" << dest << endl;
        return; // 递归出口
    }

    // 将src的n-1个盘子以dest为中转，移到mid
    Hanoi(n - 1, src, dest, mid);

    // 将src的最下面一个盘子移到dest并输出移动记录
    cout << n << ":" << src << "->" << dest << endl;

    // 将mid的n-1个盘子以src为中转，移到dest
    Hanoi(n - 1, mid, src, dest);
}
