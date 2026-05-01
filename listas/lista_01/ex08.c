#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    double razao;
    double primeiro, ultimo;
    double soma;
    int num_termos;

    printf("digite a razão, o primeiro e último termo de uma PA:\n");
    scanf("%lf %lf %lf", &razao, &primeiro, &ultimo);

    num_termos = (ultimo - primeiro) / razao + 1;
    soma = num_termos * (primeiro + ultimo) / 2;

    printf("a soma dos termos dessa PA é %.0lf\n", soma);
    
    return 0;
}
