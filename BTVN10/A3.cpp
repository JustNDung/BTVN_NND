#include <bits/stdc++.h>
using namespace std;
int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
    //Dòng delete c gây ra lỗi. Dòng này cố gắng giải phóng một vùng nhớ mà không phải là đầu của mảng được cấp phát động ban đầu.

    //Mảng a có độ dài 10, nhưng con trỏ c chỉ được cấp phát bằng cách dời con trỏ a đi 3 phần tử, vì vậy nó trỏ tới vùng nhớ không phải là đầu của mảng.

    //Do đó, việc gọi delete c là không hợp lệ và dẫn đến hành vi không xác định.
}