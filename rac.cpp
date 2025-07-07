#include <stdio.h> 
int main()
{

int a,b, tong ,hieu ,du;
printf ("nhap so nguyen a =");
scanf ("%d", &a );
printf ("nhap so nguyen b =");
scanf ("%d", &b );

tong = a+b ;
hieu = a-b ;
du = a%b;
printf ("tong cua %d + %d = %d",a,b,tong);
printf ("hieu cua %d - %d = %d ",a,b,hieu) ;
 printf("\n");
 
 return 0; 
}
  
