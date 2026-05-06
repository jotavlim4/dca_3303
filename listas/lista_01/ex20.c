#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    int ano;
    
    printf("digite um ano para verificar se ele é bissexto:\n");
    scanf("%d", &ano);

    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
        printf("é bissexto!\n");
    else
        printf("não é bissexto!\n");

    return 0;
}
