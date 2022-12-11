#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen ("NewTestcase.txt", "r");

    char ch;
    for (ch = fgetc(fptr); ch != EOF; ch = fgetc(fptr)) {
        printf("%c", ch);
    }

    /* ch = fgetc(fptr);
    while(ch!= EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    } */
    printf("\n");
    fclose(fptr);
    return 0;
}