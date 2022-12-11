#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("NewTestcase.txt", "r");

//To Write the letters in the NewTestcase.txt file
    printf( "%c", fgetc(fptr));
    printf( "%c", fgetc(fptr));
    printf( "%c", fgetc(fptr));
    printf( "%c", fgetc(fptr));
    printf( "%c", fgetc(fptr));
    
    fclose(fptr);
    return 0;
}