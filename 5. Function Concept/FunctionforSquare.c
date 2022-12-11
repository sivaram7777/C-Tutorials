#include<stdio.h>

int square (int n);

int main() {
int n = 5;

printf("The square of %d is : %d\n", n,square (n));
return 0;
}

int square (int n) {
    n = n * n;
    //printf("The Square is : %d\n", n);
    return n;
}