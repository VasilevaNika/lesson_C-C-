#include <stdio.h>

int main() {
    int temp;
    printf("Введите температуру: ");
    scanf("%d", &temp);
    printf(temp >= -150 && temp <= 120 ? "Допустимо\n" : "Недопустимо\n");
    return 0;
}