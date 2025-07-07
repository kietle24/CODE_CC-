#include<stdio.h>
int main(){
    int code;
    for(code=0;code<=256;code++)
        printf("%c,%3d,%3o,%x\n",&code,&code,&code);
    


    return 0;
}
