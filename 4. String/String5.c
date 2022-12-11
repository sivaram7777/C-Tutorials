#include<stdio.h>
#include <string.h>
void salting (char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    salting (password);
}

void salting (char password[]){
    char newpassword [200];
    char salt[] = "123456";

    strcpy (newpassword, password);
    strcat (newpassword, salt);

    puts(newpassword);
}