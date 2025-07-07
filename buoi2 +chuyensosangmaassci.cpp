#include <stdio.h>
int main() // hamf main ham cua chuong trinh co gia tri ve 
{
	int makt;
	char kytu;
	
	// nhap vao mot ky tu va in ra man hinh ma so asscci cua kytu ra man 
	printf("\n nhap vao mo ky tu (a-->z) hoac (A-->Z) hoac (0-->9) ");
	scanf("%c",& kytu);
	printf("Ma asscci cua ky tu %c la %d", kytu,kytu);
	// nhap vao con so chi ma asscci cua 1 ki ty va in ky tu ra man hinh 
	printf("\n nhap vao mot so (97-->122) hoac (65-->90) hoac (48-->57) ");
	scanf("%d",& makt);
	printf(" ky tu co ma asscci %d la %c  ", makt, makt );
	
	printf("\n");
	return 0; 	
	
}
