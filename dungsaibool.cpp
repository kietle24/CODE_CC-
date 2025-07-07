#include <stdio.h>

int main() {
    long long n, x, y, k;
    scanf("%lld %lld %lld %lld", &n, &x, &y, &k);

    // S? lu?ng xe hoi t?i da có th? d?
    long long max_cars = (n - y) / (x + k);

    // T?ng chi?u dài còn du l?i c?a bãi xe khi bãi xe dã d?y
    long long remaining_space = n - max_cars * (x + k);

    printf("%lld %lld\n", max_cars, remaining_space);

    return 0;
}
