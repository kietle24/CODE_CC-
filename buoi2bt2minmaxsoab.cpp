#include <stdio.h>
int main ()
{
	float a,b ,x;
	printf("nhap gia tri a :");
	scanf("%",&a);
		printf("nhap gia tri b : ");
	scanf("%f",&b);
	if (a==0)
	{ 
	if (b==0)
		printf("phuong trinh vo so nghiem ");
	else
		printf("phuong trinh vo nghiem ");
		
	}
	else 
	{ 
	    x=-b/a;
	printf("phuong trinh co nghiem: %.1f",x);
	
	}
 
		printf("\n");	
	return 0; 
	
}
