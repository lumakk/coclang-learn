# Introduction to Structures

## Table of Contents:


## List of keywords/terminologies
To avoid confusion, we will be using certain words/terminologies in the notes which are defined as follows:
- **Declaration** - In the context of structures it refers to creating unintialized variables and functions, for example:
  - `struct point first_point;`
  - `int myNum;`

- **Definition** - This term is typically used in functions, unions and structures. In the context of structures it refers to defining what a structure does. When creating a structure, you define it as follows:
```c
    struct point {
        int x, y;
    };
```
- **Initialization** - adding elements to a variable, for example:
  - `int myNum = 7;`
  
- **Data types** - refers to the type of element, for example:
  - `int` - for whole numbers
  - `char` - for single characters
  - `float` - for numbers with decimal points
  
- **Structure variables** - are variables that use the `struct` data type, for example:
  - `struct point first_point;`
  - `struct student st1;`
---
## 2.  Defining Structures

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

<ins>**Structure**</ins> is a data type made up of variables of other data types. It is primarily used to group items of different data types. Because of this they are often called *user-defined data types*

You **define** a structure using the `struct` keyword followed by the structure’s `members`, enclosed in braces.

`Members` are the variables/attributes inside a structure. 

Here is an example of defining a simple structure for holding the X and Y coordinates of a point: 
```c
    struct point {
        int x, y;
    };
```
- `struct` - is the data type
- `point` - is the structure name
- `int x, y` - are the members or variables with data type `int`
  
The use of a **structure name** is *optional*, but if you leave it out, you can't refer to that structure data type later on without a `typedef`:
```c
    struct {
        int x, y;
    };
```

---
## 3. Declaring Structure Variables
<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

There are two ways of declaring structure variables:
- [Declaring Structure Variables after Definition:](#31-declaring-structure-variables-after-definition)
- [Declaring Structure Variables at Definition:](#32-declaring-structure-variables-at-definition)


`members` of a structure do not occupy memory until they are associated with a `structure variable`

---

### 3.1 Declaring Structure Variables After Definition

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can declare **structure variables** after defining the structure by using the `struct` keyword and the **structure name**, followed by one or more variable names separated by commas:
```c
    // STRUCTURE DEFINITION
    struct point {
        int x, y;
    };

    // DECLARING STRUCTURE VARIABLES
    struct point first_point, second_point;
```
- `struct point` - is the data type
- `first_point, second_point` - are the variable names

---

### 3.2 Declaring Structure Variables at Definition:

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

You can declare **structure variables** by combining it with the **structure definition**. You can do this by putting the variable names after the closing braces of the **structure definition**, but not before the final semicolon. You can declare more than one variable by separating the names with commas:

This is also called **tucked-in**
```c
    struct point {
        int x, y;
    } first_point, second_point; ⬅ // declaration
```

---

### 3.3 Initializing Structure Members

<sub> [⬆ Go back to table of contents](#table-of-contents) </sub>

After declaring the structure variables, you can initialize the members of a structure type to have certain values.

One way to initialize a structure is to specify the values in a set of braces and separated by commas:
```c
    struct point {
        int x, y;
    };

    struct point first_point = {5, 10}; ⬅ // HERE
```
Values are assigned to the structure members in the same order that the members are declared in the structure in definition, as such:
- `int x` - is assigned the value of 5
- `int y` - is assigned the value of 10

Another way is to initialize the structure variable’s members when you declare the variable during the structure definition: 
```c
    struct point {
        int x, y;
    } first_point = {5, 10}; ⬅ // HERE
```

Made with ♥ by Lumak