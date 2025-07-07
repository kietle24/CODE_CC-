#include <stdio.h> 
int main(){
	float a,b,x ;
	printf("nhap vao he so cho chuong trinh ax +b ");
	printf("\na:");
	 	fflush(stdin);
	scanf("%f",a);
	printf("\nb :");

	scanf("%f",b);

	 if (a!=0){
	 	x=-b/a;
	 	printf("phuong trinh co nghiem x = %.2f",x);
	 }
else {
	if (b==0){
		printf("phuong trinh vo so nghiem");
	}
	else {
printf("phuong trinh vo nghiem");		
	}
}	
 
} 
