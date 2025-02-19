#include <stdio.h>

struct course {
    char name[50];
    int credits;
    char professor[50];
};

int main() {
    int n;
    scanf("%d", &n);
    struct course courses[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].professor);
    }

    for (int i = 0; i < n; i++) {
        printf("course: %s\ncredits: %d\nprofessor: %s\n\n", courses[i].name, courses[i].credits, courses[i].professor);
    }

    return 0;
}