//Fibonacci Series

//Fibonacci series using Array (No Function)

#include <stdio.h>
int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("%d\t", fib[0]);
    printf("%d\t", fib[1]);
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    }
return 0;
}

//Fibonacci series using Recursion (Function Method)

/* #include <stdio.h>
int fib (int n);

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i=0;i<=n;i++) {
        printf("%d", fib(i));
    }
    return 0;
}

int fib (int n) {
    //Base Condition
    if (n==0){
        return 0;
    } else if (n==1) {
        return 1;
    } else {
        return (fib(n-1) + fib(n-2));
}
} */


//Fibonacci series using Iteration (No Function)

/* #include <stdio.h>
int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int a=0 , b=1, c;
    printf ("%d\t", a);
    printf ("%d\t", b);
    for (int i = 3; i<=n; i++) {
        c = a+b;   //Values are given for a and b.
        a = b;     //The program is executed as swapping two numbers concept.
        b = c;
        printf ("%d\t", c);
    }
    return 0;
} */