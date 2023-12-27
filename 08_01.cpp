#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst;
    int num;

    cout << "输入一系列整数（输入非整数后结束输入）: ";
    while (cin >> num) {
        lst.push_back(num);
    }

    // 检查列表是否为空
    if (!lst.empty()) {
        // 删除第一个和最后一个元素
        lst.pop_front();
        lst.pop_back();
    }

    cout << "处理后的链表: ";
    for (int n : lst) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
