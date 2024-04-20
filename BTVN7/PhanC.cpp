#include <iostream>
// Hàm tính độ dài của xâu
size_t strlen(const char* str) {
    size_t length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

// Hàm sao chép xâu nguồn vào xâu đích
char* strcpy(char* destination, const char* source) {
    char* start = destination;
    while (*source != '\0') {
        *destination = *source;
        ++destination;
        ++source;
    }
    *destination = '\0'; // Kết thúc xâu đích
    return start;
}
// Hàm đảo ngược thứ tự các kí tự trong xâu
void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; ++i) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

// Hàm xóa các kí tự c khỏi xâu a
void delete_char(char a[], char c) {
    int i = 0, j = 0;
    while (a[i]) {
        if (a[i] != c) {
            a[j++] = a[i];
        }
        ++i;
    }
    a[j] = '\0';
}

// Hàm độn thêm kí tự space vào cuối xâu a cho đến khi độ dài của a bằng n
void pad_right(char a[], int n) {
    int length = strlen(a);
    if (length >= n) return; // Không cần độn nếu đã đủ dài
    for (int i = length; i < n; ++i) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

// Hàm độn thêm kí tự space vào đầu xâu a cho đến khi độ dài của a bằng n
void pad_left(char a[], int n) {
    int length = strlen(a);
    if (length >= n) return; // Không cần độn nếu đã đủ dài
    int spaces = n - length;
    for (int i = length; i >= 0; --i) {
        a[i + spaces] = a[i];
    }
    for (int i = 0; i < spaces; ++i) {
        a[i] = ' ';
    }
}

// Hàm cắt bớt xâu a để có độ dài bằng n
void truncate(char a[], int n) {
    int length = strlen(a);
    if (length <= n) return; // Không cần cắt nếu đã đủ ngắn
    a[n] = '\0';
}

// Hàm kiểm tra xâu có phải là đối xứng hay không
bool is_palindrome(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; ++i) {
        if (a[i] != a[length - i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm xóa các kí tự trắng ở đầu xâu
void trim_left(char a[]) {
    int i = 0;
    while (a[i] == ' ') {
        ++i;
    }
    if (i > 0) {
        int j = 0;
        while (a[i]) {
            a[j++] = a[i++];
        }
        a[j] = '\0';
    }
}

// Hàm xóa các kí tự trắng ở cuối xâu
void trim_right(char a[]) {
    int length = strlen(a);
    int i = length - 1;
    while (i >= 0 && a[i] == ' ') {
        --i;
    }
    a[i + 1] = '\0';
}

int main() {
    char str[] = " hello world ";
    
    // Demo các hàm
    reverse(str);
    std::cout << "Reversed string: " << str << std::endl;
    
    delete_char(str, 'o');
    std::cout << "After deleting 'o': " << str << std::endl;
    
    pad_right(str, 20);
    std::cout << "After padding right to length 20: " << str << std::endl;
    
    pad_left(str, 25);
    std::cout << "After padding left to length 25: " << str << std::endl;
    
    truncate(str, 10);
    std::cout << "After truncating to length 10: " << str << std::endl;
    
    std::cout << "Is palindrome? " << std::boolalpha << is_palindrome(str) << std::endl;
    
    trim_left(str);
    std::cout << "After trimming left: " << str << std::endl;
    
    trim_right(str);
    std::cout << "After trimming right: " << str << std::endl;
    
    return 0;
}
