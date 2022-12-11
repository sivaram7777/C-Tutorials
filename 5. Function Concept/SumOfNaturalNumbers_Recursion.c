#include <stdio.h>

//Function declaration
int sum (int n);

//Function call
int main() {
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    printf("The sum is %d", sum(n));
    return 0;
}

//Function Definition
int sum (int n) {
    //Base Condition
    if (n==1) {
        return 1;
    }
    int sumNm1 = sum (n-1); //SumNm1 = Sum of (n - 1)
    int sumN = sumNm1 + n; //SumN = Sum of N 
    return sumN;
}