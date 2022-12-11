#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);

    for (int i=100 ; i >= 1; i--) {
        if (i % n == 0) {
        printf("%d\n", i);
        }
    }
return 0;
}