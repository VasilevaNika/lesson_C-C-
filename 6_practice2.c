#include <stdio.h>
#include <stdlib.h>

char* engine[] = {
    "Gasoline", // 0
    "Diesel", // 1
    "Electric" // 2
};

int getNumberOfEngine(const char type[]) {

    for (int i = 0; i < 3; i++) {
        if (type == engine[i]) return i;
    }
}

typedef enum  {
    Gasoline, // 0
    Diesel, // 1
    Electric // 2
} EngineType;



typedef struct {
    char brand[50];
    char model[50];
    int year;
    EngineType engine;
} Vehicle;

int main() {
    int n;
    scanf("%d", &n);

    Vehicle* cars = malloc(sizeof(Vehicle) * n);
    
// 2
// Tesla ModelS 2022 Electric
// Ford Mustang 2020 Gasoline
    for (int i =0; i < n; i++) {
        char type[50];
        scanf("%s %s %d %s", 
            cars[i].brand, 
            cars[i].model, 
            &cars[i].year, 
            type
        );
        int num = getNumberOfEngine(type);
        cars[i].engine = num;
    }

    for (int i = 0; i < n; i++) {
        printf("\n %s\n %s\n %d\n %s\n", 
            cars[i].brand, 
            cars[i].model, 
            cars[i].year, 
            engine[cars[i].engine]
        );
    }
 
    free(cars);
    return 0;
}