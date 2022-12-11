#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the numbers: \n");
    scanf("%d",&n);
    printf("The Prime numbers are: \n");

    for(i=1; i<=n; i++) // To print the prime numbers in the given range 35/2345
    {
        for(j=2; j<=i; j++) {
            if (i%j == 0) {
            break;
            }
        }
            if (i%2 == 0){ // To print Odd Prime numbers in the given range  
            continue;      // i.e., To Omit number '2' (Because, 2 is the even prime number)
            }            

            if (i==j) { 
            printf("%d\n", i);
            } 
            
    }

}

