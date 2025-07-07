#include <bits/stdc++.h>
#include <string>
using namespace std;
string s, s1;
int cnt = 1;
int maxb = -1000000;
int k;
void solve()
{
    char s[] = "Em noi sao, roi sao";
    char s1[] = "doi tre muon";
    cin >> k;
    int i = 0;
    while (i < k)
    {
        cout << s[i++];
    }
    cout << " " << s1 << " ";
    while (i < strlen(s))
    {
        cout << s[i++];
    }
}

int main()
{
    solve();
    return 0;
}