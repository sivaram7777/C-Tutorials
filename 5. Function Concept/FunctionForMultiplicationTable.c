#include <stdio.h>
void PrintTable (int n);

int main() {
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);

    PrintTable(n);
    return 0;
}

    void PrintTable(int n) {
    for(int i=1; i<=50; i++) {
        printf("%d\n", n*i);
        
    }
    }

