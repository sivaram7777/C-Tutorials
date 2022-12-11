#include <stdio.h>
#include<string.h>

int countvowels (char str[]);

int main() {
    char str[] = "HelloWorld";
    printf("The Vowels in the given word is %d", countvowels(str));
    return 0;
}

int countvowels (char str[]){
    int count =0;
    for (int i = 0; str[i] != '\0'; i++) { //For Loop condition for String
        if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| 
        str[i] == 'o'|| str[i] == 'u') {
            count++;
        }
    }
    return count;
}