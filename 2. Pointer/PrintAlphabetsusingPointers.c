#include <stdio.h>

int main() {
char a = 'a';
char b = 'z';
char *x = &a;
char *y = &b;

for (char ch = *x; ch <= *y; ch++) {
printf("%c\n", ch);
}
}
