#include <stdio.h>

int main() {
    double t;
    printf("Введите время в секундах: ");
    scanf("%lf", &t);
    printf("%d мин %.1f сек\n", (int)t/60, t - ((int)t/60)*60);
    return 0;
}