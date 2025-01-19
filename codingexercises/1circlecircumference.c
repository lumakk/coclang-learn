#include <stdio.h>
#include <math.h>

int main(){

    double r;
    double C;
    double A;
    const double PI = 3.14159;

    printf("Input the radius of your circle:\n");
    scanf("%lf", &r);

    C = 2 * PI * r;
    A = PI * pow(r, 2);
    printf("The circumference of your circle is: %lf", C);
    printf("\nThe area of your circle is: %lf", A);

    return 0;
}