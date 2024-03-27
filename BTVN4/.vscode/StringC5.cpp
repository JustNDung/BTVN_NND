#include <bits/stdc++.h>
using namespace std;
enum Direction {RIGHT, DOWN, LEFT, UP};
vector<vector<int>> generateMatrix(int m, int n) { 
    vector<vector<int>> matrix(m, vector<int>(n));
    int a = 1;
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int row = 0, col = 0;
    Direction d = RIGHT;
    while (top <= bottom && left <= right) {
        matrix[row][col] = a++;
        switch(d){
            case RIGHT :
                if(col == right) {
                    top++;
                    d = DOWN;
                    row++;
                } else {
                    col++;
                }
                break;
            case DOWN :
                if(row == bottom) {
                    right--;
                    d = LEFT;
                    col--;
                } else {
                    row++;
                }
                break;
            case LEFT :
                if(col == left) {
                    bottom--;
                    d = UP;
                    row--;
                } else {
                    col--;
                }
                break;
            case UP :
                if(row == top) {
                    left++;
                    d = RIGHT;
                    col++;
                } else {
                    row--;
                }
                break;
        }
    }
    return matrix;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> x;
    x = generateMatrix(m, n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}