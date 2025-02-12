#include <stdio.h>

int main() {
    char symbol;

    printf("Введите символ (A-Z): ");
    scanf(" %c", &symbol);

    if (symbol >= 'A' && symbol <= 'Z') {
        printf("Символ '%c' входит в диапазон.\n", symbol);
    } else {
        printf("Символ '%c' не входит в диапазон.\n", symbol);
    }

    return 0;
}