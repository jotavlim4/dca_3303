#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    double a, b, c;
    double delta, x1, x2;

    printf("digite três valores reais para coeficientes de uma equação do segundo grau (a != 0, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - 4 * a * c;

    if(delta < 0)
        printf("não existem raizes reais!\n");
    else if (delta == 0){
        x1 = (-b + sqrt(delta))/(2 * a);
        printf("x = %.2lf\n", x1);
    }
    else{
        x1 = (-b + sqrt(delta))/(2 * a);
        x2 = (-b - sqrt(delta))/(2 * a);
        
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }

    return 0;
}
