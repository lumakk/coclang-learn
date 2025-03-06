#include <stdio.h>

int factorials(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;

}

int fibonnaci(int n){
    int sum;
    int t1 = 0;
    int t2 = 1;
    for (int i = 0; i < n; i++) {
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    return sum;
}

int main(){

    int number;

    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    int result = factorials(number);
    int sum = fibonnaci(number);

    printf("The factorial of %d is %d ", number, result);
    printf("\nThe fibonnaci of %d is %d ", number, sum);

    return 0;

}