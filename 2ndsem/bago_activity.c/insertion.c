#include <stdio.h>

void insertionSort(int arr[], int col){
    for (int i = 1; i < col; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}


int binarySearch(int arr[], int low, int high, int target){
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target){
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }

    }
    return -1;
    
}

int main(){
    int rows, col;

    /*
        rows = array set
        col = array position
        arr[i][j] = the element itself where i is the row and j is the column
    
    */

    // ROWS & COLUMN INPUT
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter the number of columns: ");
    scanf("%d", &col);

    int arr[rows][col];

    // ELEMENTS USER INPUT
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            printf("\nEnter row %d column %d of the 2D array: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // PRINT NON SORTED 2D ARRAY
    printf("Non-sorted 2D array (row-wise):\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    

    // SORT EACH ROW
    for(int i = 0; i < rows; i++){
        insertionSort(arr[i], col);
    }

    // PRINT SORTED 2D ARRAY
    printf("\nSorted 2D array (row-wise):\n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < col; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    
    // INPUT ELEMENT TO SEARCH
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    // SEARCH ELEMENT
    int rowSearchValue = -1, colSearchValue = -1;
    for(int i = 0; i < col; i++){
        colSearchValue = binarySearch(arr[i], 0, rows - 1, target);
        if (col != -1){
            rowSearchValue = i;
            break;
        }
        
    }

    if(rowSearchValue != -1 && colSearchValue != -1) {
        printf("Element found at row %d, column %d\n", rowSearchValue, colSearchValue);
    } else {
        printf("Element not found\n");
    }


}