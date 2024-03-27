#include <bits/stdc++.h>
using namespace std;
struct grade{
    double toan, ly, anh;
};
void sapXepToan(vector<grade> &sv){
    for(int i = 0; i < sv.size(); i++){
        for(int j = i + 1; j < sv.size(); j++){
            if (sv[i].toan < sv[j].toan){
                swap(sv[i], sv[j]);
            }
        }
    }
}
void sapXepLy(vector<grade> &sv){
    for(int i = 0; i < sv.size(); i++){
        for(int j = i + 1; j < sv.size(); j++){
            if (sv[i].ly < sv[j].ly){
                swap(sv[i], sv[j]);
            }
        }
    }
}
void sapXepTB(vector<grade> &sv){
    for(int i = 0; i < sv.size(); i++){
        for(int j = i + 1; j < sv.size(); j++){
            if ((sv[i].toan + sv[i].ly + sv[i].anh) / 3 < (sv[j].toan + sv[j].ly + sv[j].anh) / 3){
                swap(sv[i], sv[j]);
            }
        }
    }
}
void print(vector<grade> &sv){
    for(int i = 0; i < sv.size(); i++){
        cout << setprecision(1) << fixed << sv[i].toan <<" "<< sv[i].ly <<" "<< sv[i].anh << endl;
    }
}
int main(){
    vector <grade> sv;
    int n;
    cin >> n;
    while (n--){
        grade diem;
        cin >> diem.toan >> diem.ly >> diem.anh;
        sv.push_back(diem);
    }
    sapXepTB(sv);
    print(sv);
}