#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin >> n;
 bool check = true;
 if (n <= 1){
    cout <<"no";
 }
 else if (n == 2){
    cout <<"yes";
 }
 else if (n > 2){
    for(int i=2; i<n; i++){
        if (n % i == 0){
            check = false;
            break;
        }
    }
    if (check == true){
        cout <<"yes";
    }
    else {
        cout <<"no";
    }
 }
}
