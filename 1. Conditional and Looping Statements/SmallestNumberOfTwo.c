#include<stdio.h>
#include<math.h>

int main(){

// To find smallest of the given two numbers
int a; 
int b;
printf("Enter the number: \n");
scanf("%d",&a);

printf("Enter the number: \n");
scanf("%d",&b);

// If a is less than b then return True (1), 
//If a is greater then b then return False (0)

printf("Whether the number is less than or not : %d\n", a < b == 1);
return 0;
}