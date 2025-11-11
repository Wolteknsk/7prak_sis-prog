#include <stdio.h>
#include <stdlib.h>

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
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student* students = malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter GPA %d: ", i + 1);
        scanf("%lf", &students[i].gpa);
    }
    
    printf("\nList of students:\n");
    for (int i = 0; i < n; i++) {
        print_student(students[i]);
    }
    
    float avg = average_gpa(students, n);
    printf("Average GPA: %.1f\n", avg);
    
    free(students);
    
    return 0;
}