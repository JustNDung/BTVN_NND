#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*n + 1-2 * i; j++){
            cout <<"*";
        }
        cout << endl;
    }
    return 0;
}
