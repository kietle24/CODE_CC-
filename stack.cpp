#include<iostream>
#define MAX 100
//push day phan tu trong stack 
//pop xoa phan tu tren dau va lay gia tri 
//size lay so phan trong stack 
//isfull kiem tra stack co du hay khong 
//isempty kiem tra stack co rong hay khong 
//top lay phan tu tren cung ma khong xoa phan tu do 
using namespace std ; 
int n = 0 ;
int arr[100];
bool isfull(){
	return n == MAX ;
}
bool isempty(){
	return n == 0 ; 
}
int push(int x ) { 
if(!isfull()){
	  arr[n++] = x ;
	  return 1 ; 
	
	}
	return 0; 
}
int pop() { 
if(!isempty()){
return 	arr[--n] ; 
	}
	return -1 ;
}
int top() { 
if(!isempty()){
return arr[n -1 ] ; 
	}
	return -1; 
}
void in(){ 
for(int i = 0; i < n ;i++){
	cout<< arr[i] <<" "; 
}
  cout << endl;
}

int main () { 
while(1){ 
cout<<"menu" ; 
cout<<"\n1.PUSH";
cout<<"\n2.POP" ; 
cout<<"\n3.TOP"; 
cout<<"\n4.IN" ; 
int lc; 
cout <<"\n nhap lua chon : "; cin >>lc; 
if(lc  ==1 ){
int x; 
cout<<"\n nhap x:"; cin >> x; 
push(x) ; 
  

}
if(lc ==2 ){
	cout<< pop() ; 
}
if(lc == 3 ) cout << top(); 
if(lc == 4 ) {
in();
}
}
return 0;  
}
