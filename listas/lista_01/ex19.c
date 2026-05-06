#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define TAM 4

int main(void){
    int valor;
    int soma = 0;

    printf("digite 4 números inteiros:\n");
    for(int i = 0; i < TAM; i++){
        scanf("%d", &valor);

        if(valor % 2 == 0)
            soma += valor;
    }

    printf("a soma dos valores pares é = %d\n", soma);


    
    return 0;
}
