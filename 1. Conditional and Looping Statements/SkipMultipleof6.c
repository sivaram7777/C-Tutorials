#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("Enter any number expect 6 :\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
    if (i % 6 == 0) { 
        continue; //skip the number in the loop
    } 
    printf("%d\n",i);
    }
    }

