#include <stdio.h>

int main() {
    int n, sodao = 0;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong!\n");
        return 1;
    }

    while (n != 0) {
        sodao = sodao * 10 + n % 10;
        n = n / 10;
    }

    printf("So dao la: %d\n", sodao);

    return 0;
}

