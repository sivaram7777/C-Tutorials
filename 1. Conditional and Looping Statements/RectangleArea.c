#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the length of the rectangle\n");
    scanf("%d" ,&a);

    printf("Enter the breadth of the rectangle\n");
    scanf ("%d" ,&b);

    int area = (a * b);
    printf("The area of the rectangle is : %d", area);
    return 0;
}