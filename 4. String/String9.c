#include<stdio.h>
#include<string.h>

//Function Declaration
void checkcharacter (char str[], char ch);

//Function Call
int main() {
    char str[] = "HelloWorld"; //Double Quotes
    char ch = 'd'; //Single Quotes
    checkcharacter(str, ch);
    return 0;
}

//Function Definition
void checkcharacter (char str[], char ch){
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] == ch) {
            printf("The Character is present\n"); 
            return;
            } /* else { 
                printf("The Character is not present\n");
            } */
        }
    }
