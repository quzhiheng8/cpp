#include <iostream>
#include <list>
#include <vector>

using namespace std;

int findMonkeyKing(int n, int m) {
    list<int> monkeys;

    // 初始化猴子编号
    for (int i = 1; i <= n; ++i) {
        monkeys.push_back(i);
    }

    auto it = monkeys.begin();
    while (monkeys.size() > 1) {
        // 数m下
        for (int i = 1; i < m; ++i) {
            ++it;
            if (it == monkeys.end()) {
                it = monkeys.begin();
            }
        }

        // 移除当前猴子
        it = monkeys.erase(it);
        if (it == monkeys.end()) {
            it = monkeys.begin();
        }
    }

    // 返回最后猴王的编号
    return monkeys.front();
}

int main() {
    int n, m;
    vector<int> monkeyKings;

    while (true) {
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        int monkeyKing = (n == 1) ? 1 : findMonkeyKing(n, m);
        monkeyKings.push_back(monkeyKing);
    }

    // 一次性输出所有猴王编号
    for (int i = 0; i < monkeyKings.size(); ++i) {
        cout << monkeyKings[i] << endl;
    }

    return 0;
}
