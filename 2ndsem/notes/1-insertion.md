# 2D Insertion Sort

### <ins>Row-Wise</ins>
Insertion sort will be done row-wise for example:

```
5 3 2      2 3 5
8 9 6  ->  6 8 9
7 1 4      1 4 7
```

The program will use the following functions:
- `insertionSort` - will run the insertion sort
- `binarySearch` - will run the binary search
- `main` - the main function

#### <ins>Insertion Sort Function</ins>
The structure of the Insertion sort function is as follows:
```c
    void insertionSort(int arr[], int size) {

    for (int i = 1; i < n; i++) {
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
The `insertionSort` function has two parameters:
- `int arr[]` - stores the elements of the array
- `int size` - stores the size of the array

We begin the function by initializing a `for loop` that starts at 1 
```c
    for(int i = 1; i < size; i++)
```
>Note: The for loop begins at 1 as the swapping occurs from right to left

We will then create a variable called `int temp` which will store the element that is being pointed at and `int j` which will be used to compare the element before or to the left of `temp`
```c
    int temp = arr[i];
    int j = i - 1;
```

Inside the for loop, we will create a while loop which will be used to keep comparing the values of temp