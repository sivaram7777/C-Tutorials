
#include <stdio.h>
#include <stdlib.h>


int main() {
    int*ptr;
    int n;
    printf("Enter n :\n");
    scanf("%d", &n);
    
    //ptr = (int*) calloc(20, sizeof(int));    //Calloc
    ptr = (int*) malloc(5* sizeof(int));    //Malloc

    for (int i= 0; i<=n;i++){
        printf("%d\t", ptr[i]);
    }
    
    return 0;
}