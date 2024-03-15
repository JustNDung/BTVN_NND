#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = 1;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout << j <<" ";
        }
        for(int j=1; j<=m - 1; j++){
            cout << j <<" ";
        }
        m++;
        cout << endl;
    }
    return 0;

}
