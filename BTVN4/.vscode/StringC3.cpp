#include <bits/stdc++.h>
using namespace std;
bool so_doi_guong(int n){
    int a = n;
    int number = 0;
    while (a != 0){
        number = number * 10 + a % 10;
        a /= 10;
    }
    if(number == n){
        return true;
    }
    else return false;

}
int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        int cnt = 0;
        cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(so_doi_guong(i)){
           cnt++; 
        }
    }
    cout << cnt;
    } 
}