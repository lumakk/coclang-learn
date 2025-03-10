#include <stdio.h>

int linear_search(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int target, size;

    printf("Input the size of your array: ");
    scanf("%d", &size);
    int array[size];
    
    for(int i = 0; i < size; i++){
        printf("\nInput Element %d: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < size; i++){
        printf("\nElement %d is: %d", i + 1, array[i]);
    }

    printf("\nFind an element: ");
    scanf("%d", &target);

    int result = linear_search(array, size, target);

    if(result != -1){
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element is not found!");
    }

}