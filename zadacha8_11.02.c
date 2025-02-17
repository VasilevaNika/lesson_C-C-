#include <stdio.h>

int main() {
    int n;
    printf("Введите вес груза: ");
    scanf("%d", &n);
    if (n % 4 == 0) printf("По %d кг\n", n/4);
    else printf("Невозможно\n");
    return 0;
}