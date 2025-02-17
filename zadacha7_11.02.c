#include <stdio.h>

int main() {
    float x;
    printf("Введите частоту: ");
    scanf("%f", &x);
    printf(x >= 2.5 && x <= 3.5 ? "Связь стабильна\n" : "Связь нестабильна\n");
    return 0;
}