#include <bits/stdc++.h>
using namespace std;

int main() {
    system("cls");
    string s;
    cin >> s;
    int m;
    cin >> m;
    int n = s.length();
    int max_length = 0;

    for (char c = 'a'; c <= 'z'; c++) {
        int l = 0;          // Khởi tạo lại l cho mỗi c
        int current_non_c = 0; // Sử dụng current_non_c thay vì count_c cho rõ nghĩa
        for (int r = 0; r < n; r++) {
            if (s[r] != c) {
                current_non_c++;
            }
            while (current_non_c > m && l <= r) {
                if (s[l] != c) {
                    current_non_c--;
                }
                l++;
            }
            if (l <= r) {
                int count_c = (r - l + 1) - current_non_c; // Tính số c còn lại
                max_length = max(max_length, count_c);
            }
        }
    }
    cout << max_length << endl;
    return 0;
}