#include <iostream>
#include <vector>
using namespace std;

// Hàm tính parity ch?n t? các v? trí cho tru?c
int parity(vector<int> &h, vector<int> positions) {
    int sum = 0;
    for (int pos : positions) {
        sum += h[pos];
    }
    return sum % 2 == 0 ? 0 : 1;
}

int main() {
    string input;
    cout << "Nhap chuoi 8 bit du lieu (vi du: 10110100): ";
    cin >> input;

    if (input.length() != 8) {
        cout << "Du lieu khong hop le. Vui long nhap dung 8 bit.\n";
        return 1;
    }

    vector<int> h(13, 0); // h[1..12], b? h[0]

    // Gán d1–d8 vào các v? trí phù h?p trong m?ng Hamming
    h[3] = input[0] - '0';
    h[5] = input[1] - '0';
    h[6] = input[2] - '0';
    h[7] = input[3] - '0';
    h[9] = input[4] - '0';
    h[10] = input[5] - '0';
    h[11] = input[6] - '0';
    h[12] = input[7] - '0';

    // Tính bit ch?n l? p1, p2, p3, p4
    h[1] = parity(h, {3, 5, 7, 9, 11});
    h[2] = parity(h, {3, 6, 7, 10, 11});
    h[4] = parity(h, {5, 6, 7, 12});
    h[8] = parity(h, {9, 10, 11, 12});

    // In k?t qu?
    cout << "Ma Hamming 12-bit (bao gom bit chan le): ";
    for (int i = 1; i <= 12; i++) {
        cout << h[i];
    }
    cout << endl;

    return 0;
}
