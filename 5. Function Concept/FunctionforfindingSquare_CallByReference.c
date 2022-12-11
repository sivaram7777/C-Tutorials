#include<stdio.h>

int square (int *n);

int main() {
int n = 5;

//printf("The square of %d is : %d\n", n,square (*n));
// square (&n);
printf("The number is : %d\nThe Square is : %d\n", n, square (&n));
return 0;
}

//Call by Reference 
int square (int *n) {
    *n = (*n) * (*n);
    //printf("The square is : %d\n", *n);
    return *n;
}