#include<stdio.h>
int main() {
    int i,j,arr[10],n;
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("Enter the elements for array : \n");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("The unsorted elements of array are: \n");
    for(i=0;i<n;i++) {
        printf("%d\t", arr[i]);
    }

    for(i=1; i<n;i++) { //For number of iterations to be performed >> (i<n) = i<4 = 1,2,3 (Iterations)
        for(j=0;j<n-i;j++){ //For comparing and swapping elements >> (n-i) = 4-1 = 3 [0,1,2 (Indexing)]
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\n\n");
    printf("The sorted elements of array are: \n");
    for(j=0;j<n;j++) {              //j is only a variable for giving conditions in for loop
        printf("%d\t", arr[j]);     //Passing j in array (i.e.,) arr[j] will 'access' the stored elements with j variable
    }
    return 0;
} 