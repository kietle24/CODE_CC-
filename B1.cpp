#include<iostream>
using namespace std ; 
int tim(int a[], int n , int x) { 
	 int l = 0  ,r = n -1 ; 
	 while(l <= r && x > a[l] && x <= a[r]) { 
		 if(a[r] == a[l ])  { 
			  if(a[l] == x )   return l; 
			  return -1 ; 
 }
	 int mid = l +((x-a[l]))*(r-l) / (a[r]-(a[l])) ; 
	 if(a[mid] == x )  { 
		 if(mid > 0 && a[mid -1 ] == x ){
			r = mid - 1; 
		 }else { 
			return mid ; 
		 }
	 }else if(a[mid]<x )  { 
		 l = mid + 1 ; 
	 }else  { 
		 r = mid -1 ; 
	 }
}if(x  == a[l]) { 
	 return l ; 
}
return - 1; 
}
int main() { 
	int a[10001] ; 
	int n  ,x;  
	cin >> n ;
	for(int i =0 ; i < n ; i++) { 
		cin >> a[i] ; 
	}
	cin >> x; 
	cout <<tim(a,n,x) ;
	return 0; 
}