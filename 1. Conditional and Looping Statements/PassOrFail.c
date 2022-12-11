#include<stdio.h>
int main() {
int mark;
printf("Enter the mark \n");
scanf("%d", &mark);

// If mark is greater than 30 the candidate is pass
// If mark is less than 30 the candidate is fail
if (mark > 30) {
    printf("The candidate is PASS \n");
} else {
    printf("The candidate is FAIL \n");
}
return 0;
}
