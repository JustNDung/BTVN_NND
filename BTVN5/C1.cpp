#include <bits/stdc++.h>

using namespace std;

int main(){
    string init, conv;
    cin >> init >> conv;
    int k;
    cin >> k;
    int i = -1, j = -1;
    string str1 = "", str2 = "";
    while(str1 == str2){
        i ++;
        j ++;
        str1 += init[i];
        str2 += conv[j];
        if (i == init.length() - 1 || j == conv.length() - 1){
            break;
        }
    }
    cout << str1;
}
