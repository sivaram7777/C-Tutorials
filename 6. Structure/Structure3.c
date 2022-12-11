#include<stdio.h>

//user defined 
struct vector {
    int x;
    int y;
};

//Function Definition
void calcsum (struct vector v1, struct vector v2, struct vector sum);

//Main Function 
int main () {
    struct vector v1 = {4 , 8};
    struct vector v2 = {2 , 6};
    struct vector sum = {0};

    calcsum (v1, v2, sum); //Function Call
    return 0;
    
}

//Function Declaration
void calcsum (struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf ("Sum of Vector X = %d", sum.x);
    printf("\n");
    printf ("Sum of Vector Y = %d", sum.y);
}