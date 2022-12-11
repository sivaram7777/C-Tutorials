#include<stdio.h>
int main(){
    int n;
    printf("Enter any number :\n");
        scanf("%d", &n);

    for (int i=1; i<=n;i++){

    if(n % 2 !=0) {
        break;
        }
    printf("%d\n", n);
    return 0;
    }
    }
