# Pointers
Before learning pointers, we need to learn about memory addresses. 

## Memory Address
A **memory address** is the location of an object or variable within the **RAM**. You can print the memory address of a variable by using the `address of` operator or ampersand: `&variable` and a `%p` format specifier:

```c
    int myAge = 43;
    
    printf("%d", myAge);
    printf("\n%p", &myAge);

    // OUTPUT
    // 43
    // 0x1000
```
As seen above, variable `int myAge` has a value of 43 with a memory address of `0x1000`. A memory address is simply the location of a specific value or variable

We can store the memory address of a variable using **pointers**

## Pointers
A **pointer** is a type of variable that holds a memory address. 

The basic structure of a pointer is as follows:
```c
    int *ptr = &variable;
```
- `int` - is the data type
- `*` - is the indirection operator, used to signify that a variable is a pointer
- `ptr` - the name of the pointer
- `&variable` - The memory address of a variable 

Pointers can then be printed as seen below:
```c
    int myAge = 19;
    int *ptr = &myAge;

    // OUTPUT THE VALUE OF myAge
    printf("My age is: %d", myAge);

    // OUTPUT THE MEMORY ADDRESS OF myAge
    printf("\nMemory address is: %p", ptr);

    // OUTPUTS
    // 19
    // 0x1000
```
In order to output the value of the pointer (referencing) you simply have to print the name of the pointer without the asterisk which in this case is `ptr`:

```c
    printf("\nMemory address is: %p", ptr);
```

See the following diagram for visualization:

![image](/2ndsem/temp/notes/images/pointers.drawio.png)

### Dereferencing
In order to access the content or value of a variable that a pointer points to, we do something called **dereferencing**
```c
    int myAge = 19;
    int *ptr = &myAge;

    // DEREFERENCE
    printf("\nMemory address is: %p", *ptr);

    // OUTPUTS
    // 19
```
**Dereferencing** is simply adding an `asterisk (*)` to the pointer variable which is pointing at the memory address of a variable whose value we want to access. In this case `*ptr` is accessing `int *ptr` which is pointing to `int myAge` who has a value of 19

See the following diagram for visualization:

![image](/2ndsem/temp/notes/images/dereference.drawio.png)

>Note: <br> Dereferencing is different from initializing a pointer:
> - When used in declaration `(int *ptr)`, you are initializing a **pointer variable**
> - When not used in declaration it is **dereferencing**

test