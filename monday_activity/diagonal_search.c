#include <stdio.h>

void diagonalSearch(int size, int arr[size][size], int target){
    for(int i = 0; i < size; i++){
        if(arr[i][i] == target){
            printf("Element found at position (%d, %d)", i, i);
            return;
        }
    }
    printf("Element not found on the diagonal.");
}

int main(){
    int arr[3][3] = {};
    int size = 3;
    int target;
    char choice;

    // USER INPUT ARRAYS
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int checkValue;
            do {
                printf("\nInput element in array[%d][%d]: ", i, j);
                checkValue = scanf("%d", &arr[i][j]); 
                if (checkValue != 1) {
                    while(getchar() != '\n');
                    printf("\nElement is a character/string. Please try again!");
                    continue;
                }

                if (arr[i][j] <= 0){
                    printf("\nElement is a negative integer. Please try again!");
                }
            } while (arr[i][j] <= 0);
        }
    }

    do {
        // PRINT ARRAY
        printf("\n========== 2D ARRAY ==========\n");
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }

        // DIAGONAL SEARCH
        printf("\nInput an element you want to search: ");
        scanf("%d", &target);
        diagonalSearch(size, arr, target);

        // DO YOU WANT TO TRY AGAIN?
        printf("\nDo you want to try again? (y/n)");
        while(getchar() != '\n');
        scanf("%c", &choice); 
    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the program! Goodbye");
    
}