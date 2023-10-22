#include <iostream>
using namespace std;

int main() {
    int num,remains_number;
    
    cout<<"请输入一个正整数"<< endl;
    cin>>num;
    remains_number =num%7;
    switch (remains_number) {
    case 1:
        cout<<"星期一"<< endl;
        break;
    case 2:
        cout<<"星期二"<< endl;
        break;
     case 3:
        cout<<"星期三"<< endl;
        break;
     case 4:
        cout<<"星期四"<< endl;
        break;
     case 5:
        cout<<"星期五"<< endl;
        break;
     case 6:
        cout<<"星期六"<< endl;
        break;
     case 7:
        cout<<"星期日"<< endl;
        break;
   }
    return 0;
}
