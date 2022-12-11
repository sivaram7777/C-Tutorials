#include<stdio.h>
int main () {

char alphabet;
printf("Enter the alphabet you want to : \n");
scanf("%c", &alphabet);

//To check whether the entered alphabet is Uppercase or lowercase

if (alphabet >= 'A' && alphabet <= 'Z') {
    printf("The alphabet is uppercase \n");

} else if (alphabet >= 'a' && alphabet <= 'z') { 
    printf("The alphabet is lowercase \n");

} else { 
    printf("Invalid alphabet \n");
}
}