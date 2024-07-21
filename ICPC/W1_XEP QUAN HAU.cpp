#include <bits/stdc++.h>
using namespace std;

int countSolutions = 0;

void solveNQueens(int n, int row, vector<bool> &cols, vector<bool> &d1, vector<bool> &d2) {
    if (row == n) {
        ++countSolutions;
        return;
    }
    for (int col = 0; col < n; ++col) {
        int id1 = col - row + n; 
        int id2 = col + row;     
        if (!cols[col] && !d1[id1] && !d2[id2]) {
            cols[col] = d1[id1] = d2[id2] = true;
            solveNQueens(n, row + 1, cols, d1, d2);
            cols[col] = d1[id1] = d2[id2] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<bool> cols(n, false);
    vector<bool> d1(2 * n, false);
    vector<bool> d2(2 * n, false);
    solveNQueens(n, 0, cols, d1, d2);
    cout << countSolutions << endl;
    return 0;
}

