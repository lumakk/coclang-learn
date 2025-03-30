#include <stdio.h>

int main(){

    int myNumber = 7;
    int *pMyNum = &myNumber;
    int deref = *pMyNum;

    // INPUT A NUMBER
    // printf("Input a number: ");
    // scanf("%d", &myNumber);

    // PRINT NUMBER
    printf("\nMemory address of number is %d", myNumber);

    // PRINT MEMORY ADDRESS
    printf("\nMemory address of number is %p", pMyNum);

    // PRINT DEREFERENCE
    printf("\nDereference number: %d", deref);


}