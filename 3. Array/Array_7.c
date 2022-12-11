//2D Array - Table to store multiples of 2 and 3 
//Using Function - Call by reference

#include<stdio.h>

//Function Definition
int printtable(int arr[][10], int *n1, int *n2, int m, int *num1, int *num2);


//Function Call
int  main() {
    int table[2][10];
    int num1, num2, n1, n2;
    printf("Enter the n1,num1 :\n");
    scanf("%d\t%d", &n1,&num1); //num1 = number to multiply with; //n1 = row number

    printf("Enter the num2,n2 :\n");
    scanf("%d\t%d", &n2,&num2);

printtable(table, &n1,&n2,10,&num1,&num2);

    for(int i=0;i<10;i++) {
        printf("%d\t", table[0][i]);
    }

printf("\n\n");

    for(int i=0;i<10;i++) {
        printf("%d\t", table[1][i]);
    }
    return 0;
}


//Function Declaration
int printtable(int arr[][10], int *n1, int *n2, int m, int *num1, int *num2) {
    for(int i=0;i<m;i++) {
        arr[*n1][i] = (*(num1) * (i+1));
    }
    for(int i=0;i<m;i++) {
        arr[*n2][i] = (*(num2) * (i+1));
    }
}