#include <stdio.h>

int main(){

    int number;
    int *pNumber = &number;

    printf("Input a number: ");
    scanf("%d", &number);

    printf("\nNumber %d stored in memory address %p", number, pNumber);

    printf("\nValue at stored address: %d\n", *pNumber);

}