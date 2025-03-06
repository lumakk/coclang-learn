#include <stdio.h>

int calculate_sum(int a, int b){
    return a + b;
}

int main(){

    int num1 = 10;
    int num2 = 20;

    // Call the calculate_sum function and store the result in sum
    int sum = calculate_sum(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;

}