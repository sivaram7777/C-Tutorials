#include <stdio.h>

int temp (int n);

int main () {
    int n; 
    printf("Enter the temperature : ");
    scanf("%d", &n);
    printf("\n", temp(n));
    return 0;
}

int temp (int n) {
    if(n >= 20) {
        printf("Hot");
    } else {    
        printf("Cold");
}
}