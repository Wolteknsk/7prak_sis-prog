#include <stdio.h>

struct Student {
    char name[50];
    double gpa;
};

void print_student(struct Student s) {
    printf("%s %.1f\n", s.name, s.gpa);
}

float average_gpa(struct Student arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) { 
        sum = sum + arr[i].gpa; 
    }
    float avg = sum / n;
    return avg;
}

int main() {
    struct Student group[5] = {
        {"Ivan", 4.5},
        {"Maria", 4.2},
        {"Petr", 3.8},
        {"Anna", 4.7},
        {"Samchuk Andrey", 4.9}
    };

    printf("List of students:\n");
    for (int i = 0; i < 5; i++) {
        print_student(group[i]);
    }

    float avg = average_gpa(group, 5);
    printf("Average GPA: %.1f\n", avg);

    return 0;
}