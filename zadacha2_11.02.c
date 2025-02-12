#include <stdio.h>

int main() {
    int distance;

    printf("Введите расстояние до ближайшей станции подзарядки: ");
    scanf("%d", &distance);

    if (distance <= 500) {
        printf("Луноход сможет добраться до станции подзарядки.\n");
    } else {
        printf( "Луноход не сможет добраться до станции подзарядки.\n");
    }

    return 0;
}