#include <iostream>
using namespace std;
int a2d[2][2] = { {1,2}, {3,4}};
int main() {
 for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 2; j++) {
		cout << "a2d[" << i << "][" << j << "]: "<< a2d[i][j] << endl; 
		}
 }
return 0;
}