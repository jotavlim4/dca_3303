#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define TAM 100

int main(void){
    char meu_nome[] = "João Victor";
    char nome[TAM];
    int c, i;
    printf("digite um nome:\n");

    for(i = 0; i < TAM - 1 && (c = getchar()) != '\n' && c != EOF; i++)
        nome[i] = c;

    nome[i] = '\0';


    if(!strcmp(meu_nome, nome))
        printf("CORRETO!\n");

    else
        printf("NOME INCORRETO!\n");

    return 0;
}
