#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // 用于生成随机数的种子，使得每次运行游戏的结果不同

    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;
    int round = 0;

    while (true) {
        cout << "第 " << round + 1 << " 回合" << endl;
        cout << "请输入你的选择 (0 - 石头, 1 - 剪刀, 2 - 布): ";
        cin >> playerChoice;

        // 生成电脑的随机选择 (0, 1, 2)
        computerChoice = rand() % 3;

        // 判断胜负
        int result = (playerChoice - computerChoice + 3) % 3;

        switch (result) {
            case 0:
                cout << "平局！" << endl;
                break;
            case 1:
                cout << "你赢了！" << endl;
                playerScore++;
                break;
            case 2:
                cout << "电脑赢了！" << endl;
                computerScore++;
                break;
        }

        round++;
        cout << "你的得分: " << playerScore << ", 电脑的得分: " << computerScore << endl;

        cout << "是否继续游戏？(1 - 继续, 0 - 退出): ";
        int continueGame;
        cin >> continueGame;

        if (continueGame == 0) {
            break;
        }
    }

    cout << "游戏结束！" << endl;
    if (playerScore > computerScore) {
        cout << "你赢了！" << endl;
    } else if (playerScore < computerScore) {
        cout << "电脑赢了！" << endl;
    } else {
        cout << "游戏平局！" << endl;
    }

    return 0;
}
