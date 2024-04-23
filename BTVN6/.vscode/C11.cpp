#include <bits/stdc++.h>
using namespace std;
void ten_to_two(int n){
    vector <int> v;
    while (n != 0){
        v.push_back(n % 2);
        n /= 2;
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i];
    }
}
int main(){
    int n;
    cin >> n;
    ten_to_two(n);
}