#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did okay!\n");
        break;
    case 'D':
        printf("Atleast it's not an F!\n");
        break;
    case 'F':
        printf("You failed!\n");
        break;
    
    default:
        printf("Please input a valid grade");
        break;
    }

    return 0;
}



