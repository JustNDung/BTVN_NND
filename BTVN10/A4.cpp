#include <iostream>
using namespace std;
int* createDynamicInt(int value) {
    int localVar = value; 
    return &localVar; 
}
int main() {
    int* ptr = createDynamicInt(5); 
    cout << *ptr << endl; 
    delete ptr; 
    cout << *ptr << endl; // Lỗi! Truy cập vào vùng nhớ không hợp lệ
    return 0;
}