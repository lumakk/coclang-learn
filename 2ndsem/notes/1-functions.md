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

**Parameters** act as variables inside the function, they store and receive data from other functions through `invoking`.

```c
    void birthday(char name[], int age){  // PARAMETERS

    }

    int main(){

        birthday(name, age);
    }
```
In the example above, `char name[]` and `int age` are the parameters.

Once a function is called or invoked, the items inside the parentheses are known as **Arguments**.
The process of sending data to another function is called **passing**
```c
    void birthday_function(){

    }

    int main(){

        birthday(name, age); // FUNCTION CALL
    }
```
In the example above, `name` and `age` are the arguments.

**Example code:**
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
3. pass data from variables `char name[]` and `int age` into the `birthday` function
4. Store data in parameters `char name[]` and `int age`
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

**Parameters** doesn't need to have the same name as **arguments** 

```c
    int calculate_sum(int a, int b){
        return a + b;
    }

    int main(){
        int num1 = 10;
        int num2 = 20;

        int sum = calculate_sum(num1, num2);

        printf("The sum of %d and %d is %d.\n", num1, num2, sum);
    }
```
As seen above the data from `int num1` and `int num2 `is passed into the `calculate_sum` function and stored in parameters `int a` and `int b`