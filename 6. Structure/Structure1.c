#include <stdio.h>
#include <string.h>

struct student //User defined
    {
        int roll;
        char name [100];
        float cgpa;
    };

//Main function
int main() {

    struct student s1;
        s1.roll = 123456;
        strcpy(s1.name, "Siva");
        s1.cgpa = 8.3;
    
    printf("Student Roll Number     : %d\n", s1.roll);
    printf("Student Roll Number     : %s\n", s1.name);
    printf("Student's cpga          : %f\n", s1.cgpa);
    printf("\n");

    struct student s2;
        s2.roll = 456789;
        strcpy(s2.name, "Ram");
        s2.cgpa = 9.6;

    printf("Student Roll Number     : %d\n", s2.roll);
    printf("Student Roll Number     : %s\n", s2.name);
    printf("Student's cpga          : %f\n", s2.cgpa);
    printf("\n");

    struct student s3;
        s3.roll = 789123;
        strcpy(s3.name, "Kumar");
        s3.cgpa = 6.2;

    printf("Student Roll Number     : %d\n", s2.roll);
    printf("Student Roll Number     : %s\n", s2.name);
    printf("Student's cpga          : %f\n", s2.cgpa);
    printf("\n");
    
    return 0;


}