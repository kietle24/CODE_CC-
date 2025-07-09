#include<bits/stdc++.h>
using namespace std ; 
int main(){ 
    system("cls"); 
int l , r  ; 
string s ; 
cin >> s ;
int n = s.size() ; 
int max_length = 0 ; 
int m ; 
cin >> m; 
for(char c = ' a' ; c <= 'z' ; c++)
{
int count = 0 ; 
for(int r  = 0  ; r < n ; r++){  
if(s[r] != c ) { 
    count++ ; 
}
while(count > m && l < r ) { 
        if(s[l] != c){ 
        count--; 

        }
        l++ ; 
}
if( l <= r ) { 
int countc = (r - l + 1) - count;  
max_length = max(max_length,countc);  
}
}
} 

cout << max_length << endl ;
return 0 ;
}





