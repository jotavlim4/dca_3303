#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define NOTAS 3.0

int main(void){
    double n1, n2, n3;
    double media;

    scanf("%lf %lf %lf", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / NOTAS;

    if(media >= 7.0)
        printf("APROVADO!\n");

    else if(media >= 5.0 && media < 7)
        printf("RECUPERAÇÃO!\n");

    else
        printf("REPROVADO!\n");
    
    return 0;
}
