#include <stdio.h>

int main() {
    int mass;
    printf("Введите массу: ");
    scanf("%d", &mass);

    if (mass >= 60 && mass <= 90) {
        printf("Вы можете пройти.\n");
    } else {
        printf("Вы не можете пройти.\n");
    }
    return 0;
}