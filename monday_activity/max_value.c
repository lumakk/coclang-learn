#include <stdio.h>

int main(){
    int array[3][3] = {};
    int size = 3;
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("Input element at array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    

}