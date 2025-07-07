#include<bits/stdc++.h>
using namespace std ; 
int main() { 
    int n ; 
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    cin >> n ;
    vector<int> a(n) ; 
    vector<int>x, x_idx ;
    vector<int>y, y_idx ;
    for(int i = 0 ; i < n ; i++) { 
        cin >>a[i] ;
    } 
    for(int i = 0 ;i< n;i++) { 
        if(a[i] > 0 ){
            x.push_back(a[i]) ; 
            x_idx.push_back(i) ;
        }
        if(a[i]< 0) {
            y.push_back(a[i]) ; 
            y_idx.push_back(i) ;
        }
    }
    sort(x.begin(), x.end()) ;
    sort(y.begin(), y.end(),greater<int>()) ;
    for(int i= 0 ; i < x.size(); i++) {
        a[x_idx[i]] = x[i]  ;
    }
    for(int i= 0 ; i < y.size(); i++) {
        a[y_idx[i]] = y[i]  ;
    }
for(int x : a) { 
    cout << x <<" ";
}
return 0; 
}