#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c,delta, x1, x2;


    printf("nhap gia tri cho  a: ");
    scanf("%f", &a);
    printf("nhap gia tri cho  b: ");
    scanf("%f", &b);
    printf("nhap gia tri cho  c: ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if (delta > 0) 
	{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("phuong trinh co hai nghiem phan biet :\n");
        printf("x1 = %.2f va  x2 = %.2f \n", x1, x2);
    } 
	
	else if (delta == 0) {
        x1 = -b / (2*a);
        printf("phuong trinh co nghiem kep \n");
        printf("x = %.2f\n", x1);
    } else {
        printf("phuong trinh vo nghiem \n");
    }

    return 0;
}
