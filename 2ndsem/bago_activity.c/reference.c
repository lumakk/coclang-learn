#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
        
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
        
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    
    // If we reach here, then the element was not present
    return -1;
}

int main() {
    int m, n;
    
    // Receive user input for dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    
    int arr[m][n];
    
    // Receive user input for elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Sort each row using insertion sort
    for (int i = 0; i < m; i++) {
        insertionSort(arr[i], n);
    }
    
    // Print the sorted 2D array
    printf("Sorted 2D array (row-wise):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    int x;
    printf("Enter the number to search: ");
    scanf("%d", &x);
    
    // Perform binary search in each row
    int row = -1, col = -1;
    for (int i = 0; i < m; i++) {
        col = binarySearch(arr[i], 0, n - 1, x);
        if (col != -1) {
            row = i;
            break;
        }
    }
    
    if (row != -1 && col != -1) {
        printf("Element found at row %d, column %d\n", row + 1, col + 1);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
