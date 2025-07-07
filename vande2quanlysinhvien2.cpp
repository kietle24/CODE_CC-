#include<bits/stdc++.h>
#include<string>
using namespace std; // Added namespace

string s, s1; 
int cnt = 1; 
int maxb = -1000000; // Added int type
int k; // Added k declaration globally since it's used in solve()

void solve() {
    char s[] = "Em noi sao, roi sao"; 
    char s1[] = "doi tre muon";
    cin >> k; 
    int i = 0; 
    while(i < k) {
        cout << s[i++]; 
    }
    cout << " " << s1 << " "; // Fixed string concatenation syntax
    while(i < strlen(s)) {
        cout << s[i++]; 
    }
}

int main() {
    solve(); // Added parentheses for function call
    return 0; // Added return statement
}
