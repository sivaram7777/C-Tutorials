#include<stdio.h>
int main() {
    int x= 5;
    extern int y;
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}

y = 10;