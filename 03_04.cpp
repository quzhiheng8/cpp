#include <iostream>
using namespace std;

int main() {
    int rows;
    int space, star;

    cout << "请输入金字塔的行数: ";
    cin >> rows;

    // 控制金字塔的高度，从1到用户输入的行数
    int currentRow = 1;

    while (currentRow <= rows) {
        // 打印空格
        space = 1;
        while (space <= rows - currentRow) {
            cout << " ";
            space++;
        }

        // 打印星号
        star = 1;
        while (star <= 2 * currentRow - 1) {
            cout << "*";
            star++;
        }

        // 换行
        cout << endl;

        currentRow++;  //currentRow+1————准备对下一行进行打印
    }

    return 0;
}
