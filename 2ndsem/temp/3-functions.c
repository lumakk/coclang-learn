#include <stdio.h>

void birthday(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main(){
    char name[] = "Mac";
    int age = 19;

    birthday("Johnny", 12); 
}