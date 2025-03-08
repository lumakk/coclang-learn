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