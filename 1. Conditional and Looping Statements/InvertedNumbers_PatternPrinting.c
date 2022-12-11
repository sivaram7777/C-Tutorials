#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter the Value: \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++) {                      //n  i  j
    for (j=0;j<n-i;j++) {                       //5  0  5    
        printf("%d ", i+1);                     //5  1  4
    }                                           //5  2  3
    printf("\n");                               //5  3  2
    }                                           //5  4  1     j = n - i
    return 0;
}