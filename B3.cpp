#include<iostream>
using namespace std; 
void in(int a[] , int n  ) { 
    for( int i =0 ; i < n ;i++) { 
        cout << a[i] << " " ; 
    }
    cout << endl ; 
}
int sx(int a[] , int n ) { 
    int cs ,gt ; 
    for(int i = 0 ; i  < n ;i++) { 
        cs  =  i ; 
        gt  = a[i] ; 
        while(cs > 0 && a[cs - 1 ] > gt ) { 
             a[cs] =a[cs -1 ]; 
             cs-- ; 
        } 
        a[cs] = gt; 
    }
}
int main () { 
     int n ; 
     int a[ 10001 ]; 
     cin >> n ; 
     for(int i =0 ; i < n ;i++) { 
        cin >> a[i] ; 
     }
      sx(a,n) ; 
     in(a,n) ; 
    
return 0 ; 
}