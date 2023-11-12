#include <iostream>
#include <string>

using namespace std;

int main() {
    // 输入待转换的字符串
    string input;
    getline(cin, input);

    // 遍历字符串并将小写字母转换为大写字母
    for (char &ch : input) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a' ;
        }
    }

    // 输出转换后的字符串
    cout << input << endl;

    return 0;
}
