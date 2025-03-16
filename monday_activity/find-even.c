#include <stdio.h>

#define SIZE 3

void return_DivbyThree(int arr[SIZE][SIZE]){
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(arr[i][j] % 2 == 0){
                printf("Value: %d, at (%d, %d) is an even number\n", arr[i][j], i, j);
            }
        }
    }
}

int main(){
    int arr[SIZE][SIZE] = {};
    char choice;

    do{
        // INPUT ARRAY ELEMENTS
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                int checkValue;
                do{
                    printf("Input element for array[%d][%d]: ", i, j);
                    checkValue = scanf("%d", &arr[i][j]); 

                    if(checkValue != 1){
                        printf("\nElement is a character/string. Please try again!\n");
                        while(getchar() != '\n');
                        continue;
                    }

                    if(arr[i][j] <= 0){
                        printf("\nElement is a negative integer. Please try again!\n");
                    }

                } while (arr[i][j] <= 0);
            }
        }

        // PRINT ARRAY ELEMENTS
        printf("\n======= 2D ARRAYS =======\n");
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }

        // RETURN DIV BY 3
        return_DivbyThree(arr);

        // ASK USER AGAIN
        printf("\nDo you want to try again? (y/n): ");
        while(getchar() != '\n');
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the program. Goodbye!");
}