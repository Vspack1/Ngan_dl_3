#include <iostream>
#include <cmath>

using namespace std;

// Hàm tìm GCD của hai số
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Hàm tìm ước chung lớn nhất của ít nhất hai phần tử trong mảng
int findMaxCommonDivisor(int arr[], int n) {
    int maxDivisor = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int commonDivisor = gcd(arr[i], arr[j]);
            if (commonDivisor > maxDivisor) {
                maxDivisor = commonDivisor;
            }
        }
    }
    return maxDivisor;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int result = findMaxCommonDivisor(A, N);
    cout << result << endl;
    return 0;
}
