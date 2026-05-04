#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define IMPOSTO 0.45
#define LUCRO 0.12

int main(void){
    double custo;
    double preco_final;

    printf("digite o custo de fabricação do veículo: \n");
    scanf("%lf", &custo);

    preco_final = custo * (1 + IMPOSTO + LUCRO);

    printf("preço final do veículo é %.2lf\n", preco_final); 
    
    return 0;
}
