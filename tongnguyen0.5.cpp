#include <stdio.h>

int main() {
    int n;


    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Các so thoa mãn dieu kien là:\n");
 
    for (int i = 1; i <= n; i++) {
      
        if (i % 2 != 0 && i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
