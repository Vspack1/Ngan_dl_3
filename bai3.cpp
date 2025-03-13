#include <iostream>

using namespace std;

int main() {
    int n = 0; // Số lượng phần tử trong mảng
    int* arr = new int[50000]; // Mảng động để lưu trữ các số

    int x;
    while (cin >> x) {
        arr[n] = x; // Lưu số vào mảng
        n++; // Tăng số lượng phần tử
    }

    // In ra các số trong mảng theo thứ tự ngược lại
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    delete[] arr; // Giải phóng bộ nhớ
    return 0;
}
