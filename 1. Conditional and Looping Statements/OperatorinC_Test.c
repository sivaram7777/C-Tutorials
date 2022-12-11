#include<stdio.h>
int main() {
    int n;
    n = 5;
    printf("%d,%d,%d,%d \n",++n,n,++n,n++); //8,8,8,5
}

#include<stdio.h>
int main() {
    int n;
    n = 5;
    //printf("%d \n",n);
    printf("%d \n",++n);        //5,6,7,8
    printf("%d \n",++n);
    printf("%d \n",n++);
    printf("%d \n",n++);
    return 0;
}

// Gate 2017 Question
#include<stdio.h>
int main() {
    int m = 10;
    int n, n1;
    n = ++m;            //11
    n1 = m++;           //11
    n--;                //10
    --n1;               //10
    n -= n1;            //10-10 =0
    printf("%d\n", n);  //0
    return 0;
}