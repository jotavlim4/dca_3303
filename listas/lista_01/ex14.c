#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    int x, y;
    int quociente;

    printf("digite dois valores inteiros: \n");
    scanf("%d %d", &x, &y);

    if (y != 0){
        quociente = x / y;
        printf("%d / %d = %d\n", x, y, quociente);
    }
    else
        printf("DIVISÃO POR ZERO!\n");
    return 0;
}
