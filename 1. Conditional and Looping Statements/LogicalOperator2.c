#include <stdio.h>
#include <math.h>

int main() {
    int a;
    printf("Enter the number : \n");
    scanf("%d,\n", &a);

    printf("The Statement is True(1) or False(0) : %d\n", a>9 && a<100);
    return 0;
}