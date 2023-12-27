#include <iostream>
#include <forward_list>
using namespace std;

template<typename T>
void filterList(forward_list<T>& lst, T threshold) {
    lst.remove_if([threshold](const T& value) { return value < threshold; });
}

int main() {
    forward_list<int> lst;
    int num;

    cout << "输入一系列整数（输入非整数后结束输入）: ";
    while (cin >> num) {
        lst.push_front(num);
    }

    int threshold;
    cout << "输入阈值: ";
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cin >> threshold;

    filterList(lst, threshold);

    cout << "过滤后的列表: ";
    for (int n : lst) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
