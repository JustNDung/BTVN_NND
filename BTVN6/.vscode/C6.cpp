#include <bits/stdc++.h>
using namespace std;
int uCLN(int a, int b){
    for(int i = a; i >= 1; i--){
        if (a % i == 0 && b % i == 0){
            return i;
        }
    } 
}
int main(){
    int a, b;
    cin >> a >> b;
    int u = uCLN(a, b);
    cout << u << endl;
    if (u == 1){
        cout << "2 số là số nguyên tố cùng nhau " << endl;
    }
}