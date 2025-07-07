#include <stdio.h> 
#include <math.h> 
int main(){
	float a,b,c,x1,x2,delta ;
	printf("nhap he so a b c :");
	scanf("%f%f%f",&a,&b,&c);


	if(a==0){
			printf("\nhe so a phai khac 0");
	}
	else {
		delta = b*b-4*a*c;
	if (delta>0){
			x1 =(-b-sqrt(delta))/(2*a);
			x2 =(-b+sqrt(delta))/(2*a);
			printf("\npt co nghiem x1 =%.2f va x2= %.2f",x1,x2);
			}
	else if (delta=0){
				x1=-b/(2*a);
				printf("\nphuong trinh co nghiem kep x1=x2=%.2f",x1);
				
				
				
			}
	else{
				printf("\nphuong trinh vo nhiem" );
			}
			
			
		}
	}

	
 

