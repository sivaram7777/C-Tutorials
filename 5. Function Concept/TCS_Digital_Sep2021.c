/* TCS Coding Question Day 1 Slot 1 – Question 1
Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
2nd data, Total number of wheels = W
The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.

Example :

Input :

200  -> Value of V
540   -> Value of W
Output :

TW =130 FW=70
Explanation:

130+70 = 200 vehicles

(70*4)+(130*2)= 540 wheels

Constraints :

2<=W
W%2=0
V<W
Print “INVALID INPUT” , if inputs did not meet the constraints.

The input format for testing 

The candidate has to write the code to accept two positive numbers separated by a new line.

First Input line – Accept value of V.
Second Input line- Accept value for W.
The output format for testing 

Written program code should generate two outputs, each separated by a single space character(see the example)
Additional messages in the output will result in the failure of test case */

int main()
{ 
    int v,w;
    //Input

    printf("enter value of v:"); //V is total of four wheeler and two wheeler
    scanf("%d\n", &v); //W is total of wheels of four wheeler and two wheeler 
    printf("enter value of w");
    scanf("%d\n", &w); 

//Given Constraints
if(v>w || w%2!=0 || 2>=w) {
printf("you enter invalid input");
} else {
printf("you enter valid input"); 

//Program
int t, f;
int a = w/2;
f = a-v;
t = v-f;
printf("total number of four wheeler is: %d",f); 
printf("total number of two wheeler is : %d\n",t); 
}
}