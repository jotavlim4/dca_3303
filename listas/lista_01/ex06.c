#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    double x, y;
    double soma, produto, quociente;

    printf("digite dois números reais:\n");
    scanf("%lf %lf", &x, &y);

    soma = x + y;
    produto = x * y;

    if(y != 0)
        quociente = x / y;

    printf("soma = %lf\n", soma);
    printf("produtos = %lf\n", produto);
    printf("quociente = %lf\n", quociente);


    return 0;
}
