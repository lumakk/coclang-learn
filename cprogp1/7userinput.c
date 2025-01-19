#include <stdio.h>
#include <string.h>


int main(){

   int age;
   char name[25]; 

   printf("What is your name?\n");
   fgets(name, 25, stdin); // fgets(variable, input size, stdin)
   name[strlen(name)-1] = '\0';

   printf("How old are you?:\n");
   scanf("%d", &age);


    // FINAL OUTPUT
   printf("Hello %s, you are %d years old!", name, age);

    return 0;
}