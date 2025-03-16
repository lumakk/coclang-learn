#include <stdio.h>
#include <limits.h>

// Function to find the maximum value in a 2D array
void findMaxIn2DArray(int array[3][3], int result[3]) {
    int maxValue = INT_MIN;
    int maxRow = -1, maxCol = -1;

    // Iterate through the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] > maxValue) {
                maxValue = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Store the results in the result array
    result[0] = maxValue;
    result[1] = maxRow;
    result[2] = maxCol;
}

int main() {
    int array[3][3];
    int result[3]; // Array to store max value and its position

    printf("Enter the elements of the 3x3 array (row by row):\n");
    
    // Input validation and reading values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (scanf("%d", &array[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1; // Exit program on invalid input
            }
        }
    }

    // Find the maximum value and its position
    findMaxIn2DArray(array, result);

    printf("Max Value: %d at Position: (%d, %d)\n", result[0], result[1], result[2]);

    return 0;
}
