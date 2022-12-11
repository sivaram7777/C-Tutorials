#include <stdio.h>
#include <string.h>

void slice (char str[], int n, int m);

int main() {
    char str[100];
    scanf("%s", str);
    slice (str, 1, 5); //Notation = only str, not str[]
}

void slice (char str[], int n, int m) {
    char newstr [100];
    int j = 0;
    for(int i=n; i<=m; i++,j++) {
        newstr[j] = str [i];
    }
    newstr[j] = '\0'; //After the Completion of for loop, String of [j] = Null character. (i.e String is terminated)
    puts(newstr); //Notation = only str, not str[]
}
