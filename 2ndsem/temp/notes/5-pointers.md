# Pointers
Before learning pointers, we need to learn about memory addresses. 

## Memory Address
A **memory address** is the location of an object or variable within the **RAM**. You can print the memory address of a variable by using an ampersand `&variable` and a `%p` format specifier:

```c
    int myAge = 43;
    
    printf("%d", myAge);
    printf("\n%p", &myAge);

    // OUTPUT
    // 43
    // 0x7ffe5367e044
```
As seen above, variable `int myAge` has a value of 43 with a memory address of `0x7ffe5367e044`.

We can store the memory address of a variable using **pointers**

## Pointers
A **pointer** is a type of variable that holds a memory address. 

The structure of a pointer is as follows:
```c
    int *ptr = &age;
```
`int` - is the data type
<br>`*` - 

A pointer variable points to a data type (like int) of the same type andis created with the * operator

