#include <stdio.h>

#define SIZE 3

void returnMaxValue(int arr[SIZE][SIZE], int returnValue[3]){
    int maxValue = -1;
    int maxRow = -1, maxCol = -1;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(arr[i][j] > maxValue){
                maxValue = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    // RETURN VALUES
    returnValue[0] = maxValue;
    returnValue[1] = maxRow;
    returnValue[2] = maxCol;
} 

int main(){
    int arr[SIZE][SIZE] = {};
    int returnValue[3];
    char choice;

    do {
        // INPUT ELEMENTS OF THE ARRAY
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                int checkChar;
                do {
                    printf("Input element in array[%d][%d]: ", i, j);
                    checkChar = scanf("%d", &arr[i][j]); 

                    if (checkChar != 1){
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

        // PRINT ELEMENTS OF THE ARRAY
        printf("\n========= 2D ARRAY =========\n");
        for(int i = 0; i < SIZE; i++){
            for(int j = 0; j < SIZE; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }

        // RETURN MAX VALUE
        returnMaxValue(arr, returnValue);
        printf("The maximum value is: %d, it is found in position (%d, %d)", returnValue[0], returnValue[1], returnValue[2]);

        // ASK IF YOU WANT TO TRY AGAIN 
        printf("\nDo you want to try again? (y/n): ");
        while(getchar() != '\n');
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');
}