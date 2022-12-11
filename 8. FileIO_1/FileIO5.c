#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("Testcase1.txt", "w");

    char name[100];
    printf("The name is :\n");
    gets(name);

    fprintf(fptr, "%s", name);
    return 0;

}