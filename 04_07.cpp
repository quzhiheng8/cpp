#include <iostream>
#include <vector>

using namespace std;

const int N = 8;
vector<vector<int>> solutions;

// 检查当前位置是否合法
bool isSafe(vector<int>& queenPos, int row, int col) {
    // 检查同一列
    for (int i = 0; i < row; i++) {
        if (queenPos[i] == col || abs(queenPos[i] - col) == abs(i - row)) {
            return false;
        }
    }
    return true;
}

// 回溯算法求解八皇后问题
void solveNQueens(int row, vector<int>& queenPos) {
    if (row == N) {
        solutions.push_back(queenPos);
        return;
    }

    for (int col = 0; col < N; col++) {
        if (isSafe(queenPos, row, col)) {
            queenPos[row] = col;
            solveNQueens(row + 1, queenPos);
            // 回溯：清除对当前解的修改
            queenPos[row] = 0;
        }
    }
}

// 获取第b个皇后串
vector<int> getNthSolution(int b) {
    vector<int> queenPos(N, 0);
    solveNQueens(0, queenPos);
    return solutions[b - 1];
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> results;

    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;

        // 清空solutions向量
        solutions.clear();

        vector<int> result = getNthSolution(b);
        results.push_back(result);
    }

    // 一次性输出所有结果
    for (int i = 0; i < results.size(); i++) {
        for (int j = 0; j < N; j++) {
            cout << results[i][j] + 1;  // 输出结果加1，因为在代码中索引从0开始，而皇后的位置是从1开始计数的
        }
        cout << endl;
    }

    return 0;
}
