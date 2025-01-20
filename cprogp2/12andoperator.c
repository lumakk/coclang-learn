#include <stdio.h>

int main(){

    // && (AND logical operator) - outputs TRUE if BOTH CONDITIONS ARE TRUE

    float temp;

    printf("Input a temperature\n");
    scanf("%f", &temp);

    if(temp >= 0 && temp<=30){
        printf("\nThe weather is good!");
    } else{
        printf("\nThe weather is bad!");
    }

    return 0;
}



