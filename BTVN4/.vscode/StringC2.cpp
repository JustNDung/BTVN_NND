#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    for(int i=0; i<=len/2; i++){
        if(s[i] != s[len - i - 1]){
            cout << "NO";
            break;
        }
        else if(i == len/2){
            cout << "YES";
        }
    }
    return 0;
}  