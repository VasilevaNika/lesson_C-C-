#include <stdio.h>

int main() {
    int n;
    printf("Введите количество: ");
    scanf("%d", &n);
    printf(n % 2 == 0 ? "Можно\n" : "Нельзя\n");
    return 0;
}