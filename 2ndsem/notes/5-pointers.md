# Pointers

**Table of Contents:**
- [1. Memory Address](#1-memory-address)
- [2. Pointers](#2-pointers)
    - [2.1 -  Dereferencing](#21----dereferencing)
    - [2.2 - Double Pointers](#22---double-pointers)


## 1. Memory Address
A **memory address** is the location of an object or variable within the **RAM**. You can print the memory address of a variable by using the `address of` operator or `&` like this: `&variable`, and a `%p` format specifier:

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

---

## 2. Pointers
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
    // My age is: 19
    // Memory address is: 0x1000
```
In order to output the value of the pointer (referencing) you simply have to print the name of the pointer without the asterisk which in this case is `ptr`:

```c
    printf("\nMemory address is: %p", ptr);
```

See the following diagram for visualization:

![image](/2ndsem/notes/images/pointers.drawio.png)

---

### 2.1 -  Dereferencing

In order to access the content or value of a variable that a pointer points to, we do something called **dereferencing**
```c
    int myAge = 19;
    int *ptr = &myAge;

    // DEREFERENCE
    printf("\nValue of myAge: %d", *ptr);

    // OUTPUTS
    // Value of myAge: 19
```
**Dereferencing** is simply adding an `asterisk (*)` to the pointer variable which is pointing at the memory address of a variable whose value we want to access. In this case `*ptr` is accessing `int *ptr` which is pointing to `int myAge` who has a value of 19

See the following diagram for visualization:

![image](/2ndsem/notes/images/dereference.drawio.png)

>Note: <br> Dereferencing is different from initializing a pointer:
> - When used in declaration `(int *ptr)`, you are initializing a **pointer variable**
> - When not used in declaration it is **dereferencing**

You can also store dereferenced values as an integer as seen below:
```c
    int myNumber = 7;
    int *ptr = &myNumber;
    int deref = *ptr; // DEREFERENCE

    printf("%d", deref); // PRINT DEREF

    // OUTPUTS
    // 7
```

### 2.2 - Double Pointers
---
You can store the memory address of a pointer through **double pointers**, these are also called **pointer-to-pointers**
```c
    int myValue = 7;
    int *ptr = &myValue;
    int **dptr = &ptr; // DOUBLE POINTER

    printf("%d", myValue);
    printf("\n%p", ptr);
    printf("\n%p", dptr); // PRINT DOUBLE POINTER

    // OUTPUTS:
    // 7
    // 0x1000
    // 0x1004 <-- OUTPUT OF DOUBLE POINTER
```
As seen above: we create a double pointer variable called `dptr` which stores the memory address of the pointer `ptr`, when we print `dptr`, we can see that it prints the memory address of `ptr`

See the image below for visualization:
![image](/2ndsem/notes/images/double-pointers.png)

You can then dereference the value of dptr:
```c
    int myValue = 7;
    int *ptr = &myValue;
    int **dptr = &ptr; // DOUBLE POINTER

    printf("%d", myValue);
    printf("\n%p", ptr);
    printf("\n%p", *dptr); // DEREFERENCE DOUBLE POINTER

    // OUTPUTS:
    // 7
    // 0x1000
    // 0x1000 <-- OUTPUT OF DEREFERENCED DOUBLE POINTER
```
Above we can see that dereferencing our double pointer outputs the memory address of `myValue`, since that is what `ptr` is storing

We can then add another asterisk or **double-dereference** a double pointer in order to access the dereferenced value of `ptr`, which is the value stored by `myValue`
```c
    int myValue = 7;
    int *ptr = &myValue;
    int **dptr = &ptr; // DOUBLE POINTER

    printf("%d", myValue);
    printf("\n%p", ptr);
    printf("\n%d", **dptr); // DOUBLE DEREFERENCE

    // OUTPUTS:
    // 7
    // 0x1000
    // 7 <-- OUTPUT OF DOUBLE DEREFERENCE
```