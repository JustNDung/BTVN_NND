#include <bits/stdc++.h>
using namespace std;
int rnd(double n){
    int a = n;
    double du = n - a;
    if(du >= 0.5){
        return a + 1;
    }
    else{
        return a;
    }
}
int main(){
    double n;
    cin >> n;
    cout << rnd(n);
}