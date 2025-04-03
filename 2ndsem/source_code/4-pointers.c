#include <stdio.h>

int main(){

    int myValue = 7;
    int *ptr = &myValue;
    int **dptr = &ptr; // DOUBLE POINTER

    printf("%d", myValue);
    printf("\n%p", ptr);
    printf("\n%d", **dptr); // DEREFERENCE DOUBLE POINTER

    // OUTPUTS:
    // 7
    // 0x1000
    // 0x1004 <-- OUTPUT OF DOUBLE POINTER
    

}