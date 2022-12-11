#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter any number \n");
    scanf("%d", &n);

    if (n%2 != 0 && n%3 != 0 && n%5 != 0 && n%7 != 0) {
        printf("The number is a Prime Number \n");
        } else {
        printf("The number is Not a Prime Number \n");
        }
        return 0;
}