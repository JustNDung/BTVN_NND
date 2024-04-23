#include <bits/stdc++.h>
using namespace std;
int randomIntegerLessThanN(int N) {
    srand(time(nullptr));
    return rand() % N;
}
int main(){
    int n;
    cin >> n;
    cout << randomIntegerLessThanN(n);
}