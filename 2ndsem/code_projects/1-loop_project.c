#include <stdio.h>

int main(){

    int terms, sum;
    int t1 = 0, t2 = 1;

    printf("Input the number of terms: ");
    scanf("%d", &terms);
    

    for(int i = 1; i <= terms; i++){
        printf("%d, ", t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;

    }

    


    return 0;
}