#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int digitCount[10] = {0}; // Mảng đếm số lần xuất hiện của mỗi chữ số

    for (int i = 0; i < N; i++) {
        long long num = A[i]; // Sử dụng long long để lưu trữ số lớn
        while (num > 0) {
            int digit = num % 10; // Lấy chữ số cuối cùng
            digitCount[digit]++; // Tăng số lần xuất hiện
            num /= 10; // Loại bỏ chữ số cuối cùng
        }
    }

    // In ra các chữ số xuất hiện theo thứ tự tăng dần
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {
            cout << i << " " << digitCount[i] << endl;
        }
    }

    return 0;
}
