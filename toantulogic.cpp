// && la toan tu and tra ve khi tat ca cac so hang deu dung ca 2 cai deu dung thi dung 
// || la toan tu or tra ve khi tat cac cac so hang deu sai vd chi 1 trong 2 dung thi dung 
// ! la toan tu not , phu dinh gia tri cua toan hang 
#include <stdio.h>
int main(){
	int a =1;
	int b =1;
	int c =0;
	printf("\n%d && %d = %d", a, b, a&&b);
	printf("\n%d && %d = %d",a, c, a&&c);
	
	printf("\n%d || %d = %d", a, b, a||b);
	printf("\n%d || %d = %d",a, c, a||c);
	
	printf("\n!%d =%d",a,!a );
	printf("\n!%d =%d",b,!b );
	
	
	return 0; 
} 
