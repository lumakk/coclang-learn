#include <stdio.h>

int linearSearch(int array[], int value, int size){

    for(int i = 0; i < size; i++){
        if(array[i] == value){
            return i;
        }
    }
    return -1;

}

int main(){

    int value;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
      
    printf("Find a number: ");
    scanf("%d", &value);

    int returnValue = linearSearch(array, value, size);

    if(returnValue != -1){
        printf("Element found at index: %d", returnValue);
    } else {
        printf("Element is not found!");
    }

}

