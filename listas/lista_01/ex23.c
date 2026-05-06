#include <stdio.h>   

#define MAX 100

int main(void){
    int multiplo;

    for(multiplo = 4; multiplo < MAX; multiplo += 4)
        printf("%d ", multiplo);
    putchar('\n');
        
    return 0;
}
