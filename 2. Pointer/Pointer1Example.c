#include <stdio.h>

int main () {
    char age = 'a';
    char *ptr = &age;
    //int **pptr = &ptr;

    printf("%c\n", (*ptr));
}

/* factorial example:
#include <stdio.h>

int main () {
    int n = 5;
    int fact = 1;
    for (int i=1; i<=n;i++) {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
} */