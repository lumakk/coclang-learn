#include <stdio.h>

int swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int num1 = 1, num2 = 5;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);



}