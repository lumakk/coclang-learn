#include <stdio.h>

int main(){

    double prices[] = {18.00, 19.20, 51.20, 12.50, 10.00, 9.00, 23.50};
    int size = sizeof(prices)/sizeof(prices[0]);
    int items;

    printf("How many items do you want to see?: ");
    printf("\nAmount of items are: %d \nInput: ", size);
    scanf("%d", &items); 

    for(int i = 0; i < items; i++){
        printf("$%.2lf\n", prices[i]);
    }

}