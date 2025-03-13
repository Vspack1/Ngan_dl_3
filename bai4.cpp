#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char* vowels = new char[N]; // Mảng động để lưu trữ nguyên âm
    char* consonants = new char[N]; // Mảng động để lưu trữ phụ âm

    int vowelCount = 0; // Số lượng nguyên âm
    int consonantCount = 0; // Số lượng phụ âm

    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;

        // Kiểm tra nếu ký tự là nguyên âm
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            if (c >= 'A' && c <= 'Z') {
                vowels[vowelCount] = c + 32; // Chuyển chữ hoa thành chữ thường
            } else {
                vowels[vowelCount] = c;
            }
            vowelCount++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { // Kiểm tra nếu ký tự là chữ cái (phụ âm)
            if (c >= 'A' && c <= 'Z') {
                consonants[consonantCount] = c + 32; // Chuyển chữ hoa thành chữ thường
            } else {
                consonants[consonantCount] = c;
            }
            consonantCount++;
        }
    }

    // In ra nguyên âm theo thứ tự xuất hiện
    cout << "Nguyên âm: ";
    for (int i = 0; i < vowelCount; i++) {
        cout << vowels[i] << " ";
    }
    cout << endl;

    // In ra phụ âm theo thứ tự ngược lại
    cout << "Phụ âm: ";
    for (int i = consonantCount - 1; i >= 0; i--) {
        cout << consonants[i] << " ";
    }
    cout << endl;

    delete[] vowels; // Giải phóng bộ nhớ
    delete[] consonants; // Giải phóng bộ nhớ

    return 0;
}
