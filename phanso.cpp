#include"stdio.h"
#include"string.h"
char* my_strchr(char x1[] ,char tk){
for(int i = 0 ; i< strlen(x1);i++){
	if(x1[i]== tk){
		return &x1[i] ; 
	}
}
 
}
int main(){
char x1[60] = "okela.vn" ;
 char*x2; 
  x2 = my_strchr(x1, '.');
  printf("\nx1 = %s", x1);
  printf("\nx2 = %s", x2); 
}
