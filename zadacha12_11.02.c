#include <stdio.h>

int main() {
    int angle;
    printf("Введите угол: ");
    scanf("%d", &angle);
    printf(angle < -180 || angle > 180 ? "Вне диапазона\n" : "OK\n");
    return 0;
}