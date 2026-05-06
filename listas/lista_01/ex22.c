#include <stdio.h>   

#define MAXIMO 200

int main(void){
    int multiplo;

    for(multiplo = 7; multiplo < MAXIMO; multiplo += 7)
        printf("%d ", multiplo);
    putchar('\n');

    return 0;
}
