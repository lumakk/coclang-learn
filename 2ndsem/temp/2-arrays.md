# Arrays

### <ins>Arrays</ins>
Are data structures that can store many values of the same data type

```c
    int arrays[size] = {1, 2, 3, 4, 5};
```
<ins>**square brackets[]**</ins> - sets the size or amount of elements in an array; leaving the brackets empty means that an array doesn't have a set amount of elements

#### **How to use Arrays**: 
Arrays can be accessed by using an **index**

```c
    int arrays[] = {1, 2, 3, 4, 5};
    printf("%d", array[0]);

    // Prints 1
```
In this case ``array[0]`` is used to access an element located in position 0 of the array.
<br> Elements in array always start in position 0, positions of an array are referred to as **indices**:

```c
    // positions/indices: {0, 1, 2, 3, 4};

    int arrays[] = {1, 2, 3, 4, 5};
```

Therefore in order to access number 4, you need to set your index as 3: ``arrays[3]`` in your `printf()` function for example:
```c
    printf("%d", array[3]);
```

#### <ins>Print Arrays using a loop</ins>

An array is primarily accessed using a `for loop`

```c
    int arrays[] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 4; i++){
        printf("%d, ", arrays[i]);
    }

    //Prints:  1, 2, 3, 4, 5, 
``` 
arrays can be printed one by one by making a `for loop` and setting the **index** for the arrays as **i** = `arrays[i]`. This makes it so that everytime **i** increases, a position in the array is accessed.
<br> This works similarly to a conveyer belt

#### <ins>Identify the size of an array</ins>

In order to identify and store the size of an array, we need to use a `sizeof()` operator.

The `sizeof()` operator returns the size of an object in bytes:
```c
    int arrays[] = {1, 2, 3, 4, 5};

    printf("%d bytes", sizeof(arrays));

    //Prints:  20 bytes 
``` 
Here we can see that the size of the `array` is worth `20 bytes` as there are **5 elements** in the array we can say that each element is worth `4 bytes` *(20 / 5 = 4)*

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
        printf("%d, ", arrays[i]);
    }

    //Prints:  1, 2, 3, 4, 5, 
``` 
This means we no longer need to update the size of the array in the `for loop` and it will automatically calculate the length of an array even if we add or remove elements in the array.
