#include<stdio.h>
#include<conio.h>
 long tong(int n)
 {
 	long s=0;
 	int i =1; 
 	while(i<= n)
 	{
 		s = s +i ;
 		i++;
 		 }
	return s; 

 }
 int main()
 {
 	int n;
	printf("\nnhap n:");
	scanf("%d",&n);
	
	long  ketqua = tong(n);
	printf("\ntong = %ld", ketqua ) ;
	getch();
	return 0; 	 
 }
