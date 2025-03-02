#include <stdio.h>

int main(){

    int n;
    int sum = 0;

    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        printf("\n");

        if(n < 0 || n == '\0'){
            printf("Number is not a positive integer, please try again!\n");
        } else {

            for(int i = 1; i <= n; ++i){
                sum += i;
            }
        
            printf("%d", sum);
        }

    } while(n < 0 || n == '\0');

}