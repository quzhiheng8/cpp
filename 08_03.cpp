#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void uniqueSort(vector<int>& vec) {
    // 排序
    std::sort(vec.begin(), vec.end());
    // 去除重复
    auto last = unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
}

int main() {
    vector<int> vec;
    int num;

    cout << "输入一系列整数（输入非整数后结束输入）: ";
    while (cin >> num) {
        vec.push_back(num);
    }

    uniqueSort(vec);

    std::cout << "去重并排序后: ";
    for (int n : vec) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
