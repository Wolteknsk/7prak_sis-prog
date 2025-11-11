#include <stdio.h>

struct Student {
    char name[50];
    double gpa;
};

int main() {
    struct Student group[5];
    
    struct Student s0 = {"Ivan", 4.5};
    struct Student s1 = {"Maria", 4.2};
    struct Student s2 = {"Petr", 3.8};
    struct Student s3 = {"Anna", 4.7};
    struct Student s4 = {"Samchuk Andrey", 4.9};
    
    group[0] = s0;
    group[1] = s1;
    group[2] = s2;
    group[3] = s3;
    group[4] = s4;
    
    printf("List of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student: %s, GPA: %.1f\n", group[i].name, group[i].gpa);
    }
    
    return 0;
}