#include <stdio.h>

int main() {
    float oxygen;
    printf("Введите уровень кислорода: ");
    scanf("%f", &oxygen);
    printf(oxygen < 15 ? "Аварийная система!\n" : "Норма\n");
    return 0;
}