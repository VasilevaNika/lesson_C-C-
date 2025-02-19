#include <stdio.h>

union grade {
    int numeric;
    char letter;
};

int main() {
    int n;
    scanf("%d", &n);
    union grade grades[n];

    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].numeric);
            printf("grade: %d\n", grades[i].numeric);
        } else if (type == 2) {
            scanf(" %c", &grades[i].letter);
            printf("grade: %c\n", grades[i].letter);
        }
    }

    return 0;
}