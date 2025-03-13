#include <iostream>
#include <cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Hàm thay thế số nguyên tố bằng 0
void replacePrimesWithZero(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) arr[i] = 0;
    }
}

// Hàm đếm số lượng phần tử lớn hơn trước và nhỏ hơn sau
void countElements(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int countGreaterBefore = 0, countSmallerAfter = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) countGreaterBefore++;
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) countSmallerAfter++;
        }
        cout << countGreaterBefore << " " << countSmallerAfter << endl;
    }
}

int main() {
    int N;
    cin >> N;
    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        B[i] = A[i]; // Tạo bản sao
    }

    cout << "Thay thế số nguyên tố bằng 0:\n";
    replacePrimesWithZero(A, N);
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n\nĐếm số lượng phần tử lớn hơn trước và nhỏ hơn sau:\n";
    countElements(B, N);
    return 0;
}
