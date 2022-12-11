#include <stdio.h>
#include<math.h>

int main() {
    int n,m;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Enter its power : ");
    scanf("%d", &m);

    int power = pow(n,m);
    printf("%d ^ %d = %d",n,m,power);
    return 0;
}


/* #include <stdio.h>
#include <math.h>
int main() {

int a;
printf("enter the number %d \n");
scanf("%d", &a);
int b; 
printf("enter the number %d \n");
scanf("%d", &b);

int power = pow(a,b);
printf("The power is %d", power);
return 0;

} */