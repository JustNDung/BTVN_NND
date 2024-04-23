#include <bits/stdc++.h>
using namespace std;
int main(){
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p; 
     *p2 = 100;
     cout << *p2;
     delete p2; //Lỗi xảy ra ở đây vì sau khi giải phóng vùng nhớ mà con trỏ p trỏ tới bằng delete p;, con trỏ p2 vẫn trỏ tới vùng nhớ đã bị giải phóng này. Việc thay đổi giá trị của *p2 sau khi vùng nhớ đã được giải phóng là không an toàn và dẫn đến hành vi không xác định\.

}