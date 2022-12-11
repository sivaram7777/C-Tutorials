#include <stdio.h>
// Function declaration

void Namaste();
void Bonjour();


// Function call
int main () {
    printf("Enter 'I' for Indian ; Enter 'F'for French\n "); //Case Sensitive
    char ch;
    scanf("%c", &ch);
    if (ch == 'I') {
        Namaste();
    } else {
        Bonjour();
    }
    return 0;
}

// Function definition 
void Namaste() {
    printf("Namaste\n");
}
void Bonjour() {
        printf("Bonjour\n");
    }