#include<bits/stdc++.h>
using namespace std ; 
void in(int a[] , int n ) { 
    for(int i = 0 ; i < n ;i++){ 
        cout << a[i] <<" "; 
    }
} 
void qs(int a[] , int l , int r ) { 
     int p =a[(l+r)/2] ; 
   
     int i= l , j = r  ; 
     while(i< j ){ 
        while(a[i] < p) i++ ; 
        while(a[j] > p) j-- ;
        if(i <=j) { 
            swap(a[i], a[j]) ; 
            i++ ; j-- ; 
        } 
     }
     if(l < j ) qs(a,l,j) ; 
     if(i < r) qs(a, i,r) ;
}

int main() {
    int n , a[100005] ;  
     cin >> n ; 
     for(int i =0 ; i < n ;i++) { 
        cin >> a[i] ; 
     }
     qs(a,0,n-1) ; 
     in(a,n); 
     return 0; 

}