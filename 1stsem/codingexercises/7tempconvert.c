#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C): ?\n");
    scanf(" %c", &unit);


    if(unit == 'C' || unit == 'c'){
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is: %.1f", temp);
    } 
    else if(unit == 'F' || unit == 'f') {
        printf("Enter the temp in Fahrenheit");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is: %.1f", temp);
    } 
    else {
        printf("\n %c is not a valid unit of measaurement", unit);
    }

    return 0;
}



