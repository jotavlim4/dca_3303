#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define DIAS_AN0 365
#define CIGARROS_CARTEIRA 20.0

int main(void){
    int num_anos, cigarros_dia;
    double preco_carteira, total;
    
    printf("você já fuma a quantos anos?\n");
    scanf("%d", &num_anos);

    printf("quantos cigarros você fuma por dia?\n");
    scanf("%d", &cigarros_dia);

    printf("em média, quanto custa uma carteira de cigarros?\n");
    scanf("%lf", &preco_carteira);

    total = (num_anos * DIAS_AN0) * cigarros_dia * (preco_carteira / CIGARROS_CARTEIRA);

    printf("total gasto ao longo de %d anos foi R$ %.2lf\n", num_anos, total);

    return 0;
}
