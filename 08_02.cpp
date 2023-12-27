#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<int> deq;
    string command;
    int num;

    cout << "可输入命令的命令：（push x(输入一个整数)), pop, print, exit）: ";
    while (true) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            deq.push_back(num);
        } else if (command == "pop") {
            if (!deq.empty()) {
                deq.pop_front();
            }
        } else if (command == "print") {
            for (int n : deq) {
                cout << n << " ";
            }
            cout << endl;
        } else if (command == "exit") {
            break;
        }
    }

    return 0;
}
