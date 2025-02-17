#include <stdio.h>
#include <math.h>

int main() {
    double calc, fact;
    printf("Введите расчетную и фактическую скорости: ");
    scanf("%lf %lf", &calc, &fact);
    printf(fabs(calc - fact) <= 0.1 ? "Орбита стабильна\n" : "Орбита нестабильна\n");
    return 0;
}