#include <stdio.h>

//Fuction Declaration (Prototype)
void PrintHello();
void PrintGoodbye();

//Fuction Call
int main() {
    PrintHello();
    PrintGoodbye();
    return 0;
}

//Function Definition

void PrintHello() {
    printf("Hello\n");

}

void PrintGoodbye() {
    printf("Goodbye\n");
    
}