#include <bits/stdc++.h>
using namespace std;
int main(){
    bool check = true;
    int a = INT_MIN;
    while (check){
        int x;
        cin >> x;
        if (x == INT_MIN){
            continue;
        }
        if (a != x){
            cout << x <<" ";
            a = x;
        }
    }
    return 0;

}
