#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    char x[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> x[i][j];
        }
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(x[i][j] != '*'){
                int cnt = 0;
                if(x[i][j + 1] == '*'){cnt ++;};
                if(x[i][j - 1] == '*'){cnt ++;};
                if(x[i - 1][j] == '*'){cnt ++;};
                if(x[i - 1][j + 1] == '*'){cnt ++;};
                if(x[i - 1][j - 1] == '*'){cnt ++;};
                if(x[i + 1][j] == '*'){cnt ++;};
                if(x[i + 1][j + 1] == '*'){cnt ++;};
                if(x[i + 1][j - 1] == '*'){cnt ++;};
                cout << cnt <<" ";
            }
            else{
                cout <<"*"<<" ";
            }
        }
        cout << endl;
    }
}