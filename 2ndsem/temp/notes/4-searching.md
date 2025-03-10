# Searching

### <ins>Searching</ins>
is the process of locating a specific element in an array. There are two primary types of searching algorithms:
- Linear Search
- Binary Search

### <ins>Linear Search</ins>
also known as **sequential search**, is a simple searching algorithm that searches each element one-by-one in an array

![image](/2ndsem/temp/notes/images/linear_search.gif)

The **Best Case Scenario** for the algorithm is when the first element in the array is the element to be searched. 

The **Worst Case Scenario** for the algorithm is when the last element in the array is the element to be searched.

#### Pros and Cons of the Linear Search:
**✅ Pros:**
  - It **works** in **Unsorted Arrays**
  - It is the simplest form of searching
  - It works great in small arrays
  
**❌Cons:**
  - It performs **badly** for **large array sizes** as it has to search each element one-by-one
  
#### Basic Algorithm:
The basic structure of a linear search is as follows:
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
We first create a function that receives three `parameters`:
  - `int arr[]` - stores the array itself
  - `int size` - stores the size of the array
  - `int target` - stores the element to search

We then initialize a `for loop` containing an `if statement` with the condition: `arr[i] == target`
```c
    for(int i = 0; i < size; i++){
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
```
The `for loop` will act as the pointer while the `if statement` with the condition `arr[i] == target` will check to see if the element that is being pointed at is equal to the element that we are searching for

If `arr[i] == target` is `true` it will return the value of the element that is being pointed at via `return i`. If not, the pointer will `increment` by one via `i++`, it will keep doing this as long as `i` is less than the `size of the array`

If the `for loop` completes without finding/returning an element, it will `return -1`, meaning target is not found

**In the `main` function:**
```c
    int main(){
        int array[] = {4, 2, 7, 1, 9, 3};
        int size = sizeof(my_list) / sizeof(my_list[0]);
        int target = 7;
        int result = linear_search(array, size, target);

        if (result != -1) {
            printf("Element found at index %d\n", result);
        } else {
            printf("Element not found in the list\n");
        }
    }
```

We store the result of the `linear_search` function in a variable named `result`. We then create an `if else` statement in order to determine whether the result is the element that we are looking for.

If `result` is `not equal to -1`, the element has been **found**, else the element doesn't exist/is **not found** in the array

### <ins>Binary Search</ins>
also known as **binary chop** is a searching algorithm for **sorted arrays** where the array is divided into two halves everytime the middle element is not equal to the element we are looking for.

If linear search is looking at each page in a book to find a word, binary search is skipping to the middle and sifting either left or right to find it

![image](/2ndsem/temp/notes/images/binary_search.gif)

The **Best Case Scenario** for the algorithm is if the middle element is the element to be searched

The **Worst Case Scenario** for the algorithm is if either the first or last element is the element to be searched

#### Pros and Cons of the Binary Search:
**✅ Pros:**
  - It performs **great** for **large array sizes**
  - It is generally faster than linear search
  
**❌Cons:**
  - It only works on **sorted arrays**
  - You need to first create a sorting algorithm in order to use binary search
  
#### Basic Algorithm:
The basic structure of a binary search is as follows:
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