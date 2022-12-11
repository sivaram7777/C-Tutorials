#include <stdio.h>

int main () {
    int prices[3];
    printf("Enter the prices of Wheat : \n");
    scanf("%d", &prices[0]);

    printf("Enter the prices of Barley : \n");
    scanf("%d", &prices[1]);

    printf("Enter the prices of Rice : \n");
    scanf("%d", &prices[2]);

    printf("The prices of Wheat is %d\nThe prices of Barley is %d\nThe prices of Rice is%d\n", prices[0], prices[1], prices[2]);
    
    float finalcost = 0.18 * (prices[0] + prices[1] + prices[2]) + (prices[0] + prices[1] + prices[2]);
    printf("The final cost (including GST) is %f", finalcost);
    return 0;
}
