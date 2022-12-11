#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        if (n % 7 != 0) {
            break; // break the loop with that number
        } else {
        printf("%d\n",n);
        }
        return 0;
    }
}