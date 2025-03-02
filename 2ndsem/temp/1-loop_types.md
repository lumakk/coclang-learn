# Looping in C

### <ins>For loops</ins>
repeats a section of code a **limited** amount of times
<br> **Code**: 
```c
    for(count; condition; increment){
        
        code
    }
```

<ins>**Count**</ins> - declare variable
<br><ins>**condition**</ins> - will run the code if true
<br><ins>**increment**</ins> - will increase the counter

Step-by-step:
<br> <ins>**Count**</ins> - declare variable
<br><ins>**1. condition**</ins> - check if true
<br><ins>**2. code**</ins> - will run if condition is true
<br><ins>**3. increment**</ins> - will run after running the code
<br><ins>**4. condition**</ins> - Checks if it is still true
<br><ins>**5. Repeat**</ins>

### <ins>While loops</ins>
repeats a section of code an **unlimited** amount of times if the condition is true
<br> **Code**: 
```c
    while(condition){
        code
    }
``` 

<ins>**Condition**</ins> - can either be true or false

Step-by-step:
<br><ins>**1. condition**</ins> - check if true
<br><ins>**2. code**</ins> - will run if condition is true
<br><ins>**3. condition**</ins> - check if still true after running code
<br><ins>**4. Repeat**</ins>

### <ins>Do-While loops</ins>
first runs the code before initiating the loop

<br> **Code**: 
```c
    do{
        code
    }while(condition);
``` 

<ins>**Condition**</ins> - can either be true or false

Step-by-step:
<br><ins>**1. code**</ins> - will run
<br><ins>**2. condition**</ins> - check if true after running code
<br><ins>**3. code**</ins> - will run if condition is true
<br><ins>**4. Repeat**</ins>

### <ins>Nested loops</ins>
Loops inside of another loop

<br> **Code**: 
```c
    for(count; condition; increment){
        for(count_2; condition_2; increment_2){
            code
        }
    }
``` 

<br><ins>**condition**</ins> - will run the code if true
<br><ins>**increment**</ins> - will increase the counter

Step-by-step:
<br><ins>**Count**</ins> - declare variable (typically denoted by i)
<br><ins>**Count_2**</ins> - declare variable (typically denoted by j)
<br><ins>**1. Condition**</ins> - check if true
<br><ins>**2. Condition_2**</ins> - check if true
<br><ins>**3.code**</ins> - run if condition_2 is true
<br><ins>**4.increment_2**</ins> - increment after running code
<br><ins>**5.Condition_2**</ins> - checks if still true
<br><ins>**5.increment**</ins> - increment if condition_2 is no longer true
<br><ins>**6.condition**</ins> - check if true
<br><ins>**7.count_2**</ins> - resets to 0 if condition is true
<br><ins>**8. Repeat**</ins>




## Question and Answer

*Q: Could I write code inside a word or, for example, Microsoft Excel?*
<br> **A: Not recommended**

*Q: Is it possible to run the program without the terminal window?*
<br> **A: You can run it using GUIs**

 

## Tips and Tricks

1. Comments can be used to write pseudocode
   1. `# Step 1 do this` <br> `# Step 2 do this` 