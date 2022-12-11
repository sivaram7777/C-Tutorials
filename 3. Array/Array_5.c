#include <stdio.h>

//Function to reverse an array
void reverse ( int arr[], int n);
void print (int arr[], int n); //Using Void, because it will not return any value. It will just reverse the values.

int main() { //There should be only one main function.
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7};
    reverse (arr, 8); //While calling function size of array (say 8) should be declared.
    print (arr, 8); //While calling function size of array (say 8) should be declared.
    return 0;
}

void reverse ( int arr[], int n){
    for (int i=0; i<n/2;i++) {
        int firstval = arr[i];
        int secndval = arr[n-i-1];
        arr[i] = secndval;
        arr[n-i-1] = firstval;
    }
}
void print (int arr[], int n){
    for (int i = 0; i<n;i++) {
        printf("%d\t", arr[i]);
    }
}
