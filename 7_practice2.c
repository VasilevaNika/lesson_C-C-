#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++) {
        struct Student* s = &students[i];
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", s->name, s->age, s->gpa);
    }

    return 0;
}