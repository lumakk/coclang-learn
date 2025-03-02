#include <stdio.h>
#include <math.h>

int main(){

    double sideA, sideB, sideC;

    printf("Input side A: ");
    scanf("%lf", &sideA);
    printf("Input side B: ");
    scanf("%lf", &sideB);

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
    printf("Your hypotenuse is: %lf ", sideC);

    return 0;
}