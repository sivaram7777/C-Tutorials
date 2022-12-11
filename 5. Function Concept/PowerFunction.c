#include <stdio.h>
#include <math.h>

//Function Declaration
int power (int a, int b);

//Function call
int main () {
    int a,b;
    printf("Enter the number (a) : ");
    scanf("%d", &a);
    printf("Enter the number (b) : ");
    scanf("%d", &b);

    printf("The power of entered number is : %d", power(a,b));
    return 0;
}

//Function Definition
int power (int a, int b){
    if (a==0) { //Base Condition
        return 0;
    } if (b==0) { //Base Condition
        return 0;
    }
    return pow(a,b);
    
}