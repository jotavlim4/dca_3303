#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define PRIMEIRO 1
#define ULTIMO 100
#define N 100

int main(void){
    int soma;

    soma = (N * (PRIMEIRO + ULTIMO)) / 2; 

    printf("A soma dos 100 primeiros números naturais é = %d\n", soma);

    return 0;
}
