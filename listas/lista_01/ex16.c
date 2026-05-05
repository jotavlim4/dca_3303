#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define TAM 3

int main(void){
    int valores[TAM];
    int menor, maior;

    printf("digite três valores inteiros:\n");
    for(int i = 0; i < TAM; i++)
        scanf("%d", &valores[i]);

    for(int i = 0; i < TAM; i++)
        for(int j = i; j < TAM; j++){
            if(valores[i] > valores[j]){
                int temp;
                temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp;
            }
        }

    for(int i = 0; i < TAM; i++)
        printf("%d ", valores[i]);
    putchar('\n');


    return 0;
}

