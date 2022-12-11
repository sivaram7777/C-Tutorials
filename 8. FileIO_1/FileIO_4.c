#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen ("Testcase.txt", "r");

    char i;
    for(i=fgetc(fptr); i!=EOF; i=fgetc(fptr)){
        printf("%c", i);
    }
    printf("\n");
    return 0;
}