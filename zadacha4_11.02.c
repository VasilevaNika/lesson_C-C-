#include <stdio.h>
#include <time.h>

int main() {
    int input_date;
    time_t now = time(NULL);
    struct tm *tm = localtime(&now);
    int current_date = (tm->tm_year + 1900)*10000 + (tm->tm_mon+1)*100 + tm->tm_mday;
    
    printf("Введите дату (ГГГГММДД): ");
    scanf("%d", &input_date);
    printf(input_date > current_date ? "Дата в будущем\n" : "Дата не в будущем\n");
    return 0;
}