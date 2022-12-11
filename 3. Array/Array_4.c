//To Count the Odd numbers in the given array using Function 

#include <stdio.h>
int countoperator (int arr[], int n);

int main () {
    int arr [] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d", countoperator (arr, 8) );
    return 0;
}

int countoperator (int arr[], int n){
    int count = 0;
    for (int i=0;i<n;i++) {
        if (arr[i] % 2 != 0) {
            count++;
    }
}
return count;
}