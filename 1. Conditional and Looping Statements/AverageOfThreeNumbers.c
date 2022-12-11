#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    printf("Enter the number a: \n");
    scanf("%d",&a);

    printf("Enter the number b: \n");
    scanf("%d",&b);

    printf("Enter the number c: \n");
    scanf("%d",&c);

    //To find the average of given three numbers

    int average = ((a + b + c) / 3);
    printf("The average of three numbers is: %d\n", average);

}