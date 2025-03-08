#include <stdio.h>

int linearSearch(int array[], int value, int target){

    for (int i = 0; i < value; i++)
    {
        if(array[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int value;
    int target;

    printf("Input the size of the array: ");
    scanf("%d", &value);
    int array[value];

    for (int i = 0; i < value; i++) {
        printf("\nInput element %d: ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < value; i++){
        printf("Element %d: %d\n", i, array[i]);
    }

    printf("Please input a number to search: ");
    scanf("%d", &target);

    int result = linearSearch(array, value, target);

    if (result != -1) {
        printf("Number %d found in position: %d", target, result);
    } else {
        printf("Number not found");
    }
    

    
}