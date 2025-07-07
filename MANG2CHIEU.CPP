#include <stdio.h>
#include <iostream>

int main(){
    int a[3][4] = {
        {1, 2, 3, 1},
        {4, 1, 5, 2},
        {3, 7, 9, 0}
    };
    printf("a[0][0] = %d \n", a[0][0]);
    printf("a[1][3] = %d \n", a[1][3]);
    return 0;
}
