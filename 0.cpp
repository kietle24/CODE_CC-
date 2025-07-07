#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    
    // Calculate s = 2^n - r + 1
    long long s = (1LL << n) - r + 1;
    
    // Find m = floor(log2(s))
    int m = 0;
    long long temp = s;
    while (temp > 1) {
        temp >>= 1;
        m++;
    }
    if (s == 0) m = -1; // Handle edge case where s = 0 (though r <= 2^n ensures s >= 1)
    
    // Answer is min(n, m + 1)
    int answer = min(n, m + 1);
    
    cout << answer << endl;
    
    return 0;
}