#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    double x, y, z;

    printf("digite três números reais: \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    if(x > y + z)
        printf("VERDADEIRO!\n");
    
    else
        printf("FALSO!\n");    
    
    return 0;
}
