#include <stdio.h>

enum Condition {Sunny, Cloudy, Rainy};

struct weather {
    float temperature;
    float humidity;
    enum Condition condition;
};

int main() {
    struct weather w;
    scanf("%f %f %d", &w.temperature, &w.humidity, &w.condition);
    
    printf("Temperature: %.1f°C\n", w.temperature);
    printf("Humidity: %.1f%%\n", w.humidity);
    printf("Condition: ");
    
    switch(w.condition) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }

    return 0;
}