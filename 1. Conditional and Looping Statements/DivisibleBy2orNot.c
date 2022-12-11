#include <stdio.h>
#include <math.h>
int main() {
    int a;
    printf("Enter the number %d \n");
    scanf("%d", &a);

    int modulus = (a%2 == 0);

    printf("Whether the given number is divisible by 2 : %d\n", modulus);
    return 0;
}

/* #include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);

    int flag = 0;
    for(i=1;i<=n;i++) {
        if (n%i == 0) {
        flag = flag + 1; //ShortHand Expression 
    } }
if (flag == 2) {
    printf("The number is Prime number\n");
}else{
    printf("The number is not a Prime number\n");
}
} */

