# Searching and Sorting Arrays

## Table of Contents:


## List of keywords/terminologies
To avoid confusion, we will be using certain words/terminologies in the notes which are defined as follows:
- **Declaration** - a variable that doesn't have a value, for example: `int myNum;`
- **Initialization** - adding value to a variable, for example: `int myNum = 7;`
- **Elements** - refers to the value or items stored inside a variable, for example `int arr[3] = {1, 2, 3}` **1, 2, 3** are the elements
- **index** - refers to the position of an element in the array

---

## 1.  Searching Arrays

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

**Searching algorithms** are algorithms designed with the process of locating a specific element in an array. There are two primary types of searching algorithms:
- Linear Search
- Binary Search
  
---
### 1.1 Linear Search
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

also known as **sequential search**, is a simple searching algorithm that searches each element one-by-one in an array

![image](/2ndsem/notes/images/linear_search.gif)

The **Best Case Scenario** for the algorithm is when the first element in the array is the element to be searched. 

The **Worst Case Scenario** for the algorithm is when the last element in the array is the element to be searched.

---

#### 1.1.1 Pros and Cons of the Linear Search:
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

**✅ Pros:**
  - It **works** in **Unsorted Arrays**
  - It is the simplest form of searching
  - It works great in small arrays
  
**❌Cons:**
  - It performs **badly** for **large array sizes** as it has to search each element one-by-one

---

#### 1.1.2 Structure of the Linear Search
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

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
The `for loop` will move through every position in an array from left to right while the `if statement` with the condition `arr[i] == target` will check to see if the element at each position is equal to the element that we are searching for

If `arr[i] == target` is `true` then it will return the position of the element via `return i`. If not, the `for loop` will move to the next position by one via `i++`, it will keep doing this as long as `i` is less than the `size of the array` as seen below:
```c
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 3;
    
    arr[0] == 3 // FALSE
    arr[1] == 3 // FALSE
    arr[2] == 3 // TRUE 

    // THEN return arr[2]
    
```

If the `for loop` completes without finding/returning an element, it will `return -1`, meaning target is not found

**In the `main` function:**
```c
    int main(){
        int arr[] = {4, 2, 7, 1, 9, 3};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target = 7;
        int result = linear_search(arr, size, target);

        if (result != -1) {
            printf("Element found at index %d\n", result);
        } else {
            printf("Element not found in the list\n");
        }
    }
```

We store the result of the `linear_search` function in a variable named `result` by calling the `linear_search` function. We then create an `if else` statement in order to determine whether the result is the element that we are looking for.

If `result` is `not equal to -1`, the element has been **found**, else the element doesn't exist/is **not found** in the array

---

### 1.2 Binary Search

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

also known as **binary chop** is a searching algorithm for **sorted arrays** where the array is divided into two halves everytime the middle element is not equal to the element we are looking for.

If linear search is looking at each page in a book to find a word, binary search is skipping to the middle and sifting either left or right to find it

![image](/2ndsem/notes/images/binary_search.gif)

The **Best Case Scenario** for the algorithm is if the middle element is the element to be searched

The **Worst Case Scenario** for the algorithm is if either the first or last element is the element to be searched

---

#### 1.2.1 Pros and Cons of Binary Search:

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

**✅ Pros:**
  - It performs **great** for **large array sizes**
  - It is generally faster than linear search
  
**❌Cons:**
  - It only works on **sorted arrays**
  - You need to first create a sorting algorithm in order to use binary search

---

#### 1.2.2 Structure of Binary Search:

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

The basic structure of a binary search is as follows:
```c
int binary_search(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int middle = left + (right - left) / 2;

        if(arr[middle] == target){
            return middle;
        }
    
        else if(arr[middle] < target){
            left = middle + 1;
        }

        else {
            right = middle - 1;
        }
    }
    return -1;
}
```
We first create a function that receives three `parameters`:
  - `int arr[]` - stores the array itself
  - `int size` - stores the size of the array
  - `int target` - stores the element to search

We then create two variables called `int left` and `int right`, this will store the positions of the left and right side of the array respectively.
- `int left` will have the value of 0 since if you remember, 0 is the first position of the array
- `int right` is `size - 1`, since an array starts at position 0 the position of the last value of the array is how many elements it is minus one: 

```c
int binary_search(int arr[], int size, int target){
    int left = 0; 
    int right = size - 1;
}
```
  
we then create a `while loop` with the condition `left <= right`:

```c
    while(left <= right){
        
    }
```
The code for the binary search inside the `while loop` will keep running as long as the number that we are searching for is not yet found

Inside the `while loop`, we create a variable to store the position of the middle of the array:
```c
    int middle = left + (right - left) / 2
```
Although you can use the simpler `int middle = right + left / 2`, this will run into some isues if the sum exceeds the maximum integer value, which is why it is better to use the formula above

The code works by taking the sum of the right and left position and dividing it by 2:
```c
    int middle = left + (right - left) / 2;
    int left = 0;
    int right = 5;

   //  middle = 0 + (5 - 0) / 2 = 2.5 or 2
   
               // POSITION 2
                      ⬇
   int arr[] = {1, 2, 3, 4, 5, 6};
```
If the array is even (doesn't have a middle point), the result will be the integer value of the float: `2.5 = 2`, `4.5 = 4`, which means the middle point will be to the left. The value of the middle will be recalculated everytime each side of the array moves

We then create three `if statements`:
```c
        if(arr[middle] == target){
            return middle;
        }
    
        else if(arr[middle] < target){
            left = middle + 1;
        }

        else {
            right = middle - 1;
        }
```
- if `(arr[middle] == target)` is true then it returns the middle position
- if `arr[middle] < target` is true then it will *chop* the left side of the array off via `left = middle + 1`, for example:
  
  ```c
    // BEFORE
    int arr[] = {1, 2, 3, 4, 5, 6};
    int middle = 2;
    int left = 0;

    // left = middle + 1 or 2 + 1 = 3

                   // POSITION 3
                          ⬇
    int arr[] = {1, 2, 3, 4, 5, 6};
                          
    // AFTER
    int arr[] = {4, 5, 6};
    int middle = 4;
    int left = 3;
  ```
- if both the previous conditions are false (or `arr[middle] > target` ) then it will *chop* the right side of the array off via `right = middle - 1`, for example:
  
  ```c
    // BEFORE
    int arr[] = {1, 2, 3, 4, 5, 6};
    int middle = 2;
    int right = 5;

    // right = middle - 1 or 2 - 1 = 1

            // POSITION 1
                    ⬇
    int arr[] = {1, 2, 3, 4, 5, 6};
                          
    // AFTER
    int arr[] = {1, 2};
    int middle = 0;
    int right = 1;
  ```

For each iteration of the `while loop`, `int middle` is recalculated everytime and compared to the target element

If the `while loop` completes without finding/returning an element, it will `return -1`, meaning target is not found

**In the `main` function:**
```c
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    int result = binary_search(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the list\n");
    }
}
```

We store the result of the `binary_search` function in a variable named `result`. We then create an `if else` statement in order to determine whether the result is the element that we are looking for.

If `result` is `not equal to -1`, the element has been **found**, else the element doesn't exist/is **not found** in the array

---

## 2. Sorting Arrays:

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

**Sorting algorithms** are algorithms designed with the process of sorting the elements in an array either in ascending or descending order, but primarily in **ascending order**. 
```c
    // UNSORTED ARRAY
    int arr[] = {3, 1, 2, 5, 4};

    // SORTED ARRAY
    int arr[] = {1, 2, 3, 4, 5};
```



As mentioned previously, this step is needed if we want to use binary search

There are six primary types of sorting algorithms:
- Insertion Sort
- Selection Sort
- Bubble Sort
- Merge Sort
- Shell Sort 
- Quick Sort
  
Although we will only be discussing three, which are:
- Insertion Sort
- Selection Sort
- Bubble Sort

---

### 2.1 Insertion Sort

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>




---


#### 2.1.1 Insertion Sort Steps

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

---


#### 2.1.2 Insertion Sort Structure

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>


---

### 2.2 Selection Sort

---

### 2.3 Bubble Sort

---

### 2.4 Other Sorting Algorithms

---

#### 2.4.1 Merge Sort

---

#### 2.4.2 Shell Sort

---

#### 2.4.3 Quick Sort


---


Made with ♥ by Lumak