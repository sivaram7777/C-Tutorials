#include<stdio.h>
#include<math.h>
int main() {
    int i;
    int sum = 0;
    for(int i=5; i<=50; i++) {
        sum = sum + i;
    }
    printf("%d\n", sum);
        return 0;
}