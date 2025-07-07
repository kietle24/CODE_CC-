#include<bits/stdc++.h>
using namespace std; 
int a,b,c,i; 
bool z ; 
int ktsnt(int n ){
if (n <2 )
return 0; 
for(i =2 ;i < sqrt(n);++i){
if(n% i == 0 )
return 0; 
return 1; 


}
void nhap(int &a, int &b){
	cin >> a >> b ; 
 }
void xuat(int a, int b ){
	z= true ; 
	cout << a<<" "<< b ; 
}
void xuly(int &a, int  &b){
	 if(((a%2==0)&&(b%2!==0)||(a%2!==0)&&(b%2==0))))
	 {
	 	cout << a <<"va" <<b <<"khong la snttd"; 
	 	z =false ; 
	 }
	 else 
	 {
	 	if(a>=b )
	 	c= a ; 
	 	else 
	 	c= b ;
	 	for(i =1 ; i <= c/2 ;++i )
	 	if(ktsnt(i)== 1 )
	 	if(((a%i==0)&&(b%i!==0)||(a%i!==0)&&(b%i==0)))){
	 			cout << a <<"va" <<b <<"khong la snttd"; 
	 			z= false ; 
	 			break ; 
		 }
	 }
	 if(z == true )
	 	cout << a <<"va" <<b <<" a snttd"; 
}
int main(){
void nhap(a,b) ;
xuly(a,b); 

}
