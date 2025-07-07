#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 1; i <= n; i++)
#define FORR(i, a, b) for(int i = a; i <= b; i++)
#define REV(i, n) for(int i = n; i >= 1; i--)
#define ll long long
#define ch char
using namespace std;
const ll mx = 2e5;
const int MOD = 1e9 + 7;

ll n, q, k;
ll a[mx];
ll mark[mx];
ll dms[100][100];
string s, s1;

int cnt = 1, maxb = -100000000;

int isPrime(int n, int i = 2){
    if(n < 2) return 0;
    if(i * i > n) return 1;
    if(n % i == 0) return 0;
    return isPrime(n, i + 1);
}

int isPerf(int n){
    if(n == 0) return 0;
    else return n % 10 + isPerf(n / 10);
}

int check(int n){
    if(isPerf(n) > 10) return check(isPerf(n));
    return isPrime(n);
}

void PerPrime(int n, int a[]){
    static int i = 0;
    if(check(a[i])){
        cout << a[i];
        return;
    }else i++;
    PerPrime(n, a);
}


int main(){
    int a[] = {1, 11, 4, 5, 3, 8, 9, 12};
    int n = 8;
    PerPrime(n, a);
}
