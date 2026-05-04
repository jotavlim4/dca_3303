#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define COBRE 0.7
#define ZINCO 0.3

int main(void){
    double latao;
    double c, z;

    printf("digite uma quantidade de latao: ");
    scanf("%lf", &latao);

    c = COBRE * latao;
    z = ZINCO * latao;

    printf("valores de zinco e cobre em %.2lfg de latão são %.2lfg e %.2lfg\n", latao, z, c);
    return 0;
}
