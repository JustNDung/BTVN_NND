#include <bits/stdc++.h>
using namespace std;
string concat(const char* a, const char* b){
    int len1 = strlen(a);
    int len2 = strlen(b);
    string ans = "";
    for(int i = 0; i < len1; i++){
        ans += a[i];
    }
    for(int i = 0; i < len2; i++){
        ans += b[i];
    }
    return ans;
}
int main(){
    const char *a = "Hello";
    const char *b = "World";
    cout << concat(a, b);
}