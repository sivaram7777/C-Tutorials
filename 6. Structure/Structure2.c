#include <stdio.h>
#include <string.h>

//user defined 
struct address {
    int housenumber;
    char block[100];
    char city[100];
    char state[100];
};


int main () {
struct address add1 = {103, "adayar","chennai", "tamilnadu"};
struct address add2 = {325, "adayar","madurai", "tamilnadu"};
struct address add3 = {185, "adayar","trichy", "tamilnadu"};
struct address add4 = {488, "adayar","chennai", "tamilnadu"};
struct address add5 = {723, "adayar","salem", "tamilnadu"};



printf("The address is :\n");

printf("The House Number is %d\n", add1.housenumber);
printf("The Block is %s\n", add1.block);
printf("The City is %s\n", add1.city);
printf("The State is %s\n", add1.state);
printf("\n");

printf("The House Number is %d\n", add2.housenumber);
printf("The Block is %s\n", add2.block);
printf("The City is %s\n", add2.city);
printf("The State is %s\n", add2.state);
printf("\n");

printf("The House Number is %d\n", add3.housenumber);
printf("The Block is %s\n", add3.block);
printf("The City is %s\n", add3.city);
printf("The State is %s\n", add3.state);
printf("\n");

printf("The House Number is %d\n", add4.housenumber);
printf("The Block is %s\n", add4.block);
printf("The City is %s\n", add4.city);
printf("The State is %s\n", add4.state);
printf("\n");

printf("The House Number is %d\n", add5.housenumber);
printf("The Block is %s\n", add5.block);
printf("The City is %s\n", add5.city);
printf("The State is %s\n", add5.state);

return 0;
}