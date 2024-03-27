#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n + 2, vector<int>(n + 2, 0));
    int x = n * n - 1, row = 1, col = n / 2 + 1, start = 1;
    a[row][col] = start;
    while (x--) {
        row--;
        col++;
        if (row == 0) {
            row = n;
        }
        if (col == n + 1) {
            col = 1;
        }
        if (a[row][col] != 0){
            row = (row + 2) % n;
            if (row == 0){
                row = n;
            }
            if (col == 1){
                col = n;
            }
            else{
                col --;
            }
        }
        a[row][col] = ++start;
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
