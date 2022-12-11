#include<stdio.h>
int main() {

    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);

    int i;
    int sum = 1;
    for(i=1; i<=10; i++) {
        sum = i * n;
        printf("%d\n", sum);
    }
        
        return 0;
    
    }