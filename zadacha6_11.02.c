#include <stdio.h>

int main() {
    int n, found = 0;
    printf("Введите количество космонавтов: ");
    scanf("%d", &n);
    for (int a = 0; a <= n / 4; a++) {
        int rem1 = n - 4 * a;
        int max_b = rem1 / 3;
        for (int b = 0; b <= max_b; b++) {
            int rem2 = rem1 - 3 * b;
            if (rem2 % 2 == 0) {
                int c = rem2 / 2;
                printf("Вариант комплектации: %d 4-х местных, %d 3-х местных и %d 2-х местных \n", a, b, c);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Нельзя разделить космонавтов на указанные модули\n");
    }
    return 0;
}