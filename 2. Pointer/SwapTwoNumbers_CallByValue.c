#include <stdio.h>

                        //Call By Value
//Function declaration
int swap (int a, int b); 

//Function call
int main () {
    int a,b;

    printf("Enter the value of a :\n");
    scanf("%d", &a);

    printf("Enter the value of b :\n");
    scanf("%d", &b);

    swap(a,b); //The swapped value is a Copied value
    printf("a is : %d\nb is : %d\n",a,b); // Original Value

    return 0;
    
}

//Function definition
int swap (int a, int b) { 
    //Call by value
    int temp = a;
    a = b;
    b = temp;
    printf("a is : %d\nb is : %d\n",a,b);
}




//To Comment out: Block Comment - ctrl + alt + A; Individual Comment - ctrl + /


