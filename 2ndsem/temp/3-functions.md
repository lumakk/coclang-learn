# Functions and Arguments

### <ins>Functions</ins>
Are reusable blocks of code that can be used in the `main function` through `invoking`. Functions are like folders where you store certain tools and open when you need them.

Example of a function:

```c
    int function(){
        printf("This is a function!");
    }
```
In this example, `int function()` is a function with the type `integer`. Code is stored inside the **curly brackets {}**

**Calling a function:**
```c
    int function(){
        printf("This is a function!");
    }

    int main(){
        function(); // FUNCTION IS CALLED HERE
    }

    //Print: This is a function!
```
In order to call a function you simply have to copy the name of the function followed by a parentheses: `function();`.

**Parts of a function:**
```c
    void hello(char[], int);
```
The parts of a function are as follows:
- ``return type`` - in this example, ``void`` is the return type, it works similarly to variables, it will only return a certain data type
- ``function name`` - in this example, ``hello()`` is the function name, it is the name of the function used when invoking it
- ``parameters`` - in this example, ``char[], int`` are the parameters, these are used to allow functions to access one another

### <ins>Arguments and Parameters</ins>

**Parameters** act as variables inside the function, they allow data to be passed and accessed to and from the main function.

```c
    void birthday(char name[], int age){}
```
In this example, `char name[]` and `int age` are the parameters.

Once a function is called in a different function, the items inside tha parentheses are called **Arguments**
```c
    int main(){

        birthday(name, age);
    }
```
In this example, `name` and `age` are the arguments

**How it looks:**
```c
    void birthday(char name[], int age){
        printf("\nHappy birthday dear %s!", name);
        printf("\nYou are %d years old!", age);
    }

    int main(){
        char name[] = "Mac";
        int age = 19;

        birthday(name, age);
    }
    // PRINTS: Happy birthday dear Mac!
    // You are 19 years old!
```
A step by step process would be as follows:
1. Run `int main`
2. call `birthday` function with arguments `name` and `age`
3. Run `birthday` function with parameters `char name[]` and `int age`
4. Access variables `char name[]` and `int age` from `main` function
5. Run code inside the `birthday` function

> Note: When working with multiple paramaters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order

**Arguments** can also be directly passed when calling a function without declaring the variables inside the `main` function
```c
    void birthday(char name[], int age){
        printf("\nHappy birthday dear %s!", name);
        printf("\nYou are %d years old!", age);
    }

    int main(){
        
        birthday("Mac", 19);
    }
    // PRINTS: Happy birthday dear Mac!
    // You are 19 years old!
```