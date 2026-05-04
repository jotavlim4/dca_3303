#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    double v_permitida, v, multa, diff;

    printf("digite a velocidade máxima permitida para a via: \n");
    scanf("%lf", &v_permitida);

    printf("digite a velocidade do motorista na via: \n");
    scanf("%lf", &v);

    diff =  (v - v_permitida <= 0) ? 0 : v - v_permitida;
    multa = 0;

    if(0 < diff && diff <= 10.0)
        multa += 50;
    else if(11.0 <= diff && diff <= 30.0)
        multa += 100;
    else
        multa += 200;

    printf("a multa aplicada foi de R$%.2lf reais\n", multa);

    return 0;
}
