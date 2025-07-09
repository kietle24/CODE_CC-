#include<bits/stdc++.h>
using namespace std ;
int main () { 
   int n , r;  
   cin >>  n >>  r ; 
   long long s =(1LL  << n ) -r + 1 ; 
   int m = 0; 
  long long temp  = s; 
  while(temp >  1)   { 
    temp  >>= 1 ; 
    m++ ;  
  }
  if( s== 0 ) m =  - 1; 
  int anwer  = min(n, m+ 1 ) ; 
  cout << anwer << endl ; 
  return 0 ; 
}