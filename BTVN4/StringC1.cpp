#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10001] = {0};
    while(n--){
        int x;
        cin >> x;
        a[x] ++;
    } 
    for(int i=1; i<=10001; i++){
        if (a[i] >= 2){
            cout << "YES";
            break;
        }
        else if(i == 10001){
            cout << "NO";
        }
    }
}