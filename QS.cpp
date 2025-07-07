#include<iostream>
using namespace std ;
void in(int a[] , int n ) { 
for(int i = 0 ; i < n ; i++){ 
cout << a[i] <<" " ; 
}
}
void swap(int a[] , int x , int y ) { 
int temp = a[x] ; 
a[x]= a[y] ; 
a[y] = temp ; 
}
int partition(int a[] , int l , int r ){  
 int pivot = a[l ] ; 
 int count = 0 ; 
 for(int i = 0 ; i <= r ; i++) { 
 if(a[i]<= pivot)
 count++ ; 
 }
 

int pivotIndex = l + count ; 
swap(a,l,pivotIndex) ; 
int i = l ; 
int j = r ; 
while(i < pivotIndex && j > pivotIndex) { 
 while(a[i]<= pivot) i++ ; 
 while(a[j]<= pivot) j-- ; 
 if(i < pivotIndex && j > pivotIndex) {
 	swap(a,i,j) ; 
 }
}
return pivotIndex;  
}


void quicksort(int a[] , int l , int r ) { 
if(l >= r ) return ; 
int pivot  = partition(a,l,r) ; 
quicksort(a,l, pivot-1 ) ; 
quicksort(a,pivot+1, r ) ; 
}
int a[100001 ] ; 
 
int main () {
	int n ; 
	cin >> n ; 
	for(int i = 0; i < n ;i++) { 
	cin >> a[i] ; 
	}
	quicksort(a,0,n-1) ; 
	in(a,n) ; 
}
