#include <stdio.h>

                        //Call By Reference
//Function declaration
int swap (int *a, int *b); 

//Function call
int main () {
    int a,b;

    printf("Enter the value of a :\n");
    scanf("%d", &a);

    printf("Enter the value of b :\n");
    scanf("%d", &b);

    swap(&a,&b); //The swapped value is also the Original value 
    //Passing the address of the variable as arguments in main function
    //(Since, we are taking the address it will not allocate a new address and hence it will swap the existing value in the address)
    
    printf("a is : %d\nb is : %d\n",a,b); // Original Value


    
    return 0;
    
}

//Function definition
int swap (int *a, int *b) { 
    //Call by reference
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a is : %d\nb is : %d\n",*a,*b);
}