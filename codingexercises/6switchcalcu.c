#include <stdio.h>

int main(){

    int firstNum, secondNum, ans;
    char symb;
    int test;

    printf("Input your first number: \n");
    scanf("%d", &firstNum);

    printf("Input your second number: \n");
    scanf("%d", &secondNum);

    printf("Choose an operator:\n \"*\" - Multiplication\n \"+\" - Addition\n \"-\" - Subtraction\n \"/\" - Division\n");
    scanf(" %c", &symb);


    switch (symb){

        case '*': ans = firstNum * secondNum; break;
        case '+': ans = firstNum + secondNum; break;
        case '-': ans = firstNum - secondNum; break;
        case '/': ans = firstNum / secondNum; break;

        default: printf("Please input a valid symbol"); break;

    }
    printf("%d %c %d = %d", firstNum, symb, secondNum, ans);
    
    return 0;
}



