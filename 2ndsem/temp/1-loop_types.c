#include <stdio.h>
#include <string.h>

// main
int main(){

    printf("For Loop:");
    forLoop();
    printf("\nWhile Loop:");
    whileLoop();
    printf("\nDo-While Loop:");
    dowhileLoop();
    printf("\nNested Loop:\n");
    nestedLoop();
}

int forLoop(){

    for(int i = 1; i<= 10; i++) {

        printf(" %d ", i);
    }

}
int whileLoop(){

    int while_number = 0;

    while(while_number < 10){
        while_number++;
        printf(" %d ", while_number);
    }

}
int dowhileLoop(){

    int dowhile_number = 1;

    do{
    
        printf(" %d ", dowhile_number);
        dowhile_number++;

    }while(dowhile_number <= 10);

}
int nestedLoop(){

    int k, l;
    
    for(int k = 1; k <= 5; k++){
        for(int l = 1; l <= 5; l++){
            printf("%d", l);
        }
        printf("\n");
    } 


}