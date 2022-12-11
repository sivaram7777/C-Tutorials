#include <stdio.h>
int main(){
int mark;
printf("Enter the mark of the student :\n");
scanf("%d", &mark);

//To find the grades of the students through their obtained marks

if (mark < 30) {
    printf("The Grade of the Student is C \n");
} else if (mark >= 30 && mark < 70) {
    printf("The Grade of the Student is B \n");
} else if (mark >= 70 && mark < 90) {
    printf("The Grade of the Student is A \n");
}
    else if (mark >= 90 && mark < 100) {
    printf("The Grade of the Student is A+ \n");
} else {
    printf("Total mistake");
}
return 0;
}