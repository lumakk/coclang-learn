# Introduction to Arrays

## Table of Contents:
- [Table of Contents:](#table-of-contents)
- [List of keywords/terminologies](#list-of-keywordsterminologies)
- [1.  Declaring Arrays](#1-declaring-arrays)
- [2. Initializing Arrays](#2-initializing-arrays)
- [3. Accessing Array Elements](#3-accessing-array-elements)
  - [3.1 Change and modify elements in an Array](#31-change-and-modify-elements-in-an-array)
      - [3.1.1 Replace element using User input](#311-replace-element-using-user-input)
  - [3.2 Print all elements in an Array](#32-print-all-elements-in-an-array)
  - [3.3 Initializing array elements through user input](#33-initializing-array-elements-through-user-input)
  - [3.4 Identify the size of an array](#34-identify-the-size-of-an-array)
- [4. Array as Strings](#4-array-as-strings)
- [5. Array Sample Program](#5-array-sample-program)


## List of keywords/terminologies
To avoid confusion, we will be using certain words/terminologies in the notes which are defined as follows:
- **Declaration** - creating a variable that doesn't have a value, for example: `int myNum;`
- **Initialization** - adding value to a variable, for example: `int myNum = 7;`
- **Elements** - refers to the value or items stored inside a variable, for example `int arr[3] = {1, 2, 3}` **1, 2, 3** are the elements
- **index** - refers to the position of an element in the array

---

## 1.  Declaring Arrays

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

**Arrays** are data structures that can store many values of the same data type. 

You declare an array by specifying the `data type` for its elements, its `name`, and the `number of elements` it can store.

Here is an example that declares an array that can store ten integers:
```c
    int arrays[10];
```
- `int` - is the data type
- `arrays` - is the name of the array
- `[10]` - is the number of elements it can store; the `size` of the array

You cannot declare an array without a size:
```c
    int arrays[10]; ✅ // ALLOWED
    int arrays[];   ❌ // NOT ALLOWED
```
However you can declare an array without a size if the array has been **initialized** (see below:)

---

## 2. Initializing Arrays

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can initialize the elements in an array by listing the values, separated by commas in a set of braces

For example:
```c
    int arrays[5] = {0, 1, 2, 3, 4};
```

You don't have to explicitly initialize all of the array elements. For example in this code, the last two elements will default to a value of **zero**: 
```c
    // ARRAY
    int arrays[5] = {0, 1, 2};
    
    // ARRAY VALUES
    arrays[0] = 0;
    arrays[1] = 1;
    arrays[2] = 2;
    arrays[3] = 0; ⬅ // DEFAULTS TO 0
    arrays[4] = 0; ⬅ // DEFAULTS TO 0
```

You can initialize an array that is less than the size but you cannot initialize an array that exceeds the size:
```c
    ✅ int array[5] = {0, 1, 2}; // ALLOWED
    
    ❌ int array[5] = {0, 1, 2, 3, 4, 5}; // NOT ALLOWED
```

If you initialize every element of an array, then you don't have to specify its size; its size is determined by the number of elements you initialize:
```c
    int array[] = {0, 1, 2}; 
    // THE SIZE OF THE ARRAY IS AUTOMATICALLY SET TO 3
```
---

## 3. Accessing Array Elements

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

Elements of an array can be accessed by using the `index` which are used to identify the **position of an element within an array**

```c
    int array[] = {1, 2, 3, 4, 5};
    printf("%d", array[0]);

    // OUTPUT
    // 1
```
In this case ``array[0]`` is used to access an element located in **position 0** of the array.
<br>Elements in an array always start in **position 0**, positions of an array are referred to as **indices**:

```c
    // positions/indices: {0, 1, 2, 3, 4};

    int array[] = {1, 2, 3, 4, 5};
```

Therefore in order to print `4`, you need to set your `index` as **3**: ``array[3]`` in your `printf()` function:
```c
    printf("%d", array[3]);
```
For example:
```c
    int array[] = {1, 2, 3, 4, 5};

    printf("%d", array[3]);

    // OUTPUT
    // 4
```
---

### 3.1 Change and modify elements in an Array

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can access and change an element in the array by using the `index`:
```c
    array[0] = 5;
```
This assigns the value of 5 to the first element in the array, at position 0. You can then print it, for example:
```c
    int array[] = {1, 2, 3, 4, 5};
    array[0] = 5; ⬅ // REPLACE VALUE AT POSITION 0

    printf("%d", array[0]);

    // OUTPUT
    // 5
```
You can also modify the element using mathematical operations:
```c
    array[0] * 2;
```
For example:
```c
    int array[] = {1, 2, 3, 4, 5};

    printf("%d", array[2] * 5);

    // OUTPUT
    // 15
```
---

#### 3.1.1 Replace element using User input
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can also replace an element through user input by using the `scanf()` function and `address of operator (&)`:
```c
    scanf("%d", &array[0]);
```
For example:
```c
    int array[] = {1, 2, 3, 4, 5};
    printf("%d\n", array[0]);

    scanf("%d", &array[0]); ⬅ // INPUT
    printf("\n%d", array[0]);

    // OUTPUT
    // 1
    // 5 ⬅ INPUT
    // 5
```
---

### 3.2 Print all elements in an Array

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can print all elements of an array using a `for loop`

```c
    for(int i = 0; i < 5; i++){
        printf("%d, ", array[i]);
    }
``` 
arrays can be printed one by one by making a `for loop` and setting the `index` for the arrays as `i`: `arrays[i]`. This makes it so that everytime `i` increases, a position in the array is accessed and printed. *You can think of this as a conveyor belt!*
```c
    int array[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    // OUTPUT
    // 1 2 3 4 5 
``` 
---

### 3.3 Initializing array elements through user input

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

In order to initialize an array through user input you must first declare an uninitialized array with a fixed size:
```c
    int array[5];
```

After which you create a `for loop` with a `scanf()` function and an `address of operator (&)` set to the array index: `&array[i]`
```c
    for(int i = 0; i < 5; i++){
        scanf("%d, ", &array[i]);
    }
``` 
You can then create another `for loop` to print the elements for example:
```c
    int array[5];

    for(int i = 0; i < 5; i++){
        scanf("%d, ", &array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }

    // OUTPUT
    // 1 2 3 4 5 ⬅ INPUT
    // 1 2 3 4 5
``` 
---

### 3.4 Identify the size of an array

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

In order to identify and store the size of an array, we need to use a `sizeof()` operator.

The `sizeof()` operator returns the size of an object in bytes:
```c
    int arrays[] = {1, 2, 3, 4, 5};

    printf("%d bytes", sizeof(arrays));

    // OUTPUT
    // 20 bytes
``` 
Here we can see that the size of the `array` is worth `20 bytes`.

As there are **5 elements** in the array we can say that each element is worth `4 bytes` *(20 / 5 = 4)*

Although this only displays the size of the array in terms of `bytes`. In order to display the length of an array in terms of how many `elements` it has, we will be using this:
```c
    int size = sizeof(array)/sizeof(array[0]);
``` 
This works by calculating the `size of an array` **divided by the** `size of an element in an array` 

For example:
<br>`size of an array` = 20 bytes
<br>`size of an element` = 4 bytes
<br>Therefore there are `5 elements` in an array.

As all the elements in an array has the same size in terms of bytes the **index** in `sizeof(array[0]);` can be set to any number/position and it will still return the same value.

The expression can then be declared as an **integer** so that it can be used anywhere in the code, hence:
```c
    int arrays[] = {1, 2, 3, 4, 5};
    int size = sizeof(arrays)/sizeof(arrays[0]);

    for(int i = 0; i < size; i++){
        printf("%d ", arrays[i]);
    }

    // OUTPUT
    // 1 2 3 4 5
``` 
This means we no longer need to update the size of the array in the `for loop` and it will automatically calculate the length of an array even if we add or remove elements in the array.

---

## 4. Array as Strings
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can use an array of characters to hold a string. The array may be built of either signed or unsigned characters. 

There are **two different ways to initialize the string array**. You can specify a comma-delimited list of characters enclosed in braces as seen below:
```c
    char yellow[] = {'y', 'e', 'l', 'l', 'o', 'w', '\0'}; 
```
Or you can specify a string literal enclosed in double quotation marks:
```c
    char orange[] = "orange"; 
```
In each of these cases, the **null character** `'\0'` is included at the end of the string even when not explicitly stated. The null character is used to signify the endpoint of a string:
```c
    // ARRAY
    char college[] = "CCMIT";
    
    // ARRAY VALUES
    college[0] = 'C';
    college[1] = 'C';
    college[2] = 'M';
    college[3] = 'I';
    college[4] = 'T';
    college[5] = '\0'; ⬅ // NULL CHARACTER
```

The **array size**
specification is also usually omitted as the proper array size will be assigned automatically, which includes a provision for the **null character** `'\0'`.

You can print **the null character** `'\0'` however it won't be visible in the terminal output since it **is not a printable character.**

You can then print the string array using the `%s` format specifier:
```c
    char orange[] = "orange";

    printf("%s", orange);

    // OUTPUT
    // orange
```
In order to print the individual character in a string, you need to use the `index` and `%c` format specifier:
```c
    char orange[] = "orange";
    printf("%c", orange[2]);

    // OUTPUT
    // a
```

---

## 5. Array Sample Program
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

Now that you have learned all the basics when it comes to arrays, try to solve the following problem:

**Write a C program that performs the following tasks using an array of integers:**
- Define an array of size 5.
- Initialize the array elements through user input
- Display all the elements of the array in a single row.
- Ask the user to input the position of an element in the array that they wish to replace.
- Prompt the user to input a new integer value for the selected position.
- Replace the specified element in the array with the new value.
- Display the updated array in a single row.

**Sample output:**
```
Input element 0: 10
Input element 1: 20
Input element 2: 30
Input element 3: 40
Input element 4: 50
10    20    30    40    50
Input the position of the element you want to replace: 2
Input the new element: 99
10    20    99    40    50

```

**Solution to the problem:**
```c
#include <stdio.h>
int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    int input;

    for(int i = 0; i < size; i++){
        printf("Input element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }

    printf("\nInput the position of the element you want to replace: ");
    scanf("%d", &input);
    
    printf("\nInput the new element: ");
    scanf("%d", &arr[input]);

    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
}
```
*Note: the example code does not include error-handling of user input*

Made with ♥ by Lumak