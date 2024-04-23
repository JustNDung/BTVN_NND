#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
void generateRandomArray(int arr[], int N) {
    for (int i = 0; i < N; ++i) {
        arr[i] = rand() % 50; 
    }
}
void printSetsDivisibleBy25(int arr[], int N) {
    cout << "Sets of 3 integers whose sum is divisible by 25:" << endl;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}
int main() {
    const int N = 10; 
    int arr[N];
    srand(time(nullptr));
    generateRandomArray(arr, N);
    printSetsDivisibleBy25(arr, N);
    return 0;
}