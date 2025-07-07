#include <stdio.h>

int main(){  // khai bao ham chinh 
    int n;   // khai bao bien 
    for(; ;){
        printf("Nhap n : ");
        scanf("%d", &n);
        if(n == 32){
	        printf("n = %d\n", n);
			    printf("Ket thuc !!!\n");
			    break;
        }
    }
    return 0;
}
