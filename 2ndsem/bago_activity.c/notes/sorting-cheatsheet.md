# Sorting & Searching Cheat Sheet

## Sorting Algorithms

### Insertion:
```c
void insertionSort(int arr[], int size) {

    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        j = i - 1;
        
        while (int j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
```

### Selection:
```c
void selectionSort(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
```


### Bubble:
```c
void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
```

## Searching Algorithms

### Linear Search
```c
    int linear_search(int arr[], int size, int target){
        for(int i = 0; i < size; i++){
            if(arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
```

### Binary Search
```c
    int binary_search(int arr[], int size, int target){
        int left = 0;
        int right = size - 1;

        while(left <= right){
            int middle = left + (right - left) / 2;

            if (arr[middle] == target) {
                return middle;
            }

            if (arr[middle] < target){
                left = middle + 1;
            }

            else {
                right = middle - 1;
            }
        }
        return -1;
    }
```