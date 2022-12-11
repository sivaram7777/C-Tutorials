#include <stdio.h>
#include<string.h>

int countlength(char arr[]);

int main() {
    char name[50];
    fgets(name, 50, stdin);
    puts(name);
    printf("The length of the string is : %d", countlength(name));
    return 0;
}

int countlength(char arr[]) {
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
}
return count-1;
}