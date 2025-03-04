#include <stdio.h>

int linearSearch(int array[], int size, int value) {
    for(int i = 0; i < size; i++){
        if(array[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int value;
    int size = sizeof(array)/sizeof(array[0]);

    printf("Find a number: ");
    scanf("%d", &value);

    int index = linearSearch(array, size, value);

    if(index != -1){
        printf("Element found at index: %d", index);
    } else {
        printf("Element not found");
    }

}

