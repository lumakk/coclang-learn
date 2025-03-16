#include <stdio.h>

void diagonalSearch(int size, int array[size][size], int target){
    for(int i = 0; i < size; i++){
        if(array[i][i] == target){
            printf("Element found at position: (%d, %d)", i, i);
            return;
        }
    }
    printf("Element is not found");
}

int main(){
    int array[3][3] = {};
    int target;
    int size = 3;
    char choice;

    // RECEIVE USER INPUT
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int valueCheck;
            do{
                printf("\nInput element array[%d][%d]: ", i, j);
                valueCheck = scanf("%d", &array[i][j]); 

                if (valueCheck != 1){
                    printf("\nElement is a character. Please try again");
                    while (getchar() != '\n');
                    continue;
                }

                if (array[i][j] <= 0){
                    printf("\nElement is a negative integer. Please try again");
                }
            } while (array[i][j] <= 0);
        }
    }

    // PRINT 2D ARRAYS
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    do{
        // RECEIVE USER INPUT TO SEARCH FOR ELEMENT
        printf("Find element to search: ");
        scanf("%d", &target);

        // FIND 2D ARRAYS
        diagonalSearch(size, array, target);

        // ASK AGAIN
        while(getchar() != '\n');
        printf("\nDo you want to try again? (y/n): ");
        scanf("%c", &choice);
        
    } while(choice == 'y' || choice == 'Y');
    
    printf("\nProgram exited. Thank you");

}