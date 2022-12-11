#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Testcase1.txt", "w");

    int i,n;
    printf("Enter the number : \n");
    scanf("%d", &n);

    for (i=0; i<=n; i++) {
        if (i%2 !=0) {
            
            fprintf(fptr, "%d\n", i); //(File Pointer ; Format Specifier; Variable name)
        } 
        }

    
    return 0;

}