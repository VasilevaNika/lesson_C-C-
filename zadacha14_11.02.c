#include <stdio.h>

int main() {
    int mass;
    printf("Введите массу: ");
    scanf("%d", &mass);
    printf("Вес на Луне: %.2f\n", mass / 6.0);
    return 0;
}