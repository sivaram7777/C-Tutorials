#include <stdio.h>

int main() {
    char name1[10];
    char name2[10];
    printf("Please enter your FirstName : ");
    scanf("%s", name1);
    printf("Please enter your LastName : ");
    scanf("%s", name2);
    printf("The FullName is : %s%s", name1, name2);
    return 0;

}
