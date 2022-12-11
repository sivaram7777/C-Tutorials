#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter any number : \n");
    scanf("%d", &n);

    int fact = 1;
    for (int i= 1; i<=n; i++) {
    fact = i * fact;
    }
    printf("The factorial of the given number is = %d\n", fact);
    return 0;
}