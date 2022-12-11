#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    
    int sum = 0;
    for (int i=n; i>=1; i--){
        sum = sum + i;
        printf("%d\n", i);
    }

    printf("The sum is : %d\n",sum);

}