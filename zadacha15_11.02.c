#include <stdio.h>

int main() {
    double speed, data;
    printf("Введите скорость (Кбит/с) и данные (МБ): ");
    scanf("%lf %lf", &speed, &data);
    double time = (data * 8192) / speed;
    printf("%d мин %.2f сек\n", (int)time/60, time - ((int)time/60)*60);
    return 0;
}