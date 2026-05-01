#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define PI 3.14

int main(void){
    double raio_base, altura;
    double volume, area;

    printf("digite o raio da base do cilindro:\n");
    scanf("%lf", &raio_base);

    printf("digite a altura do cilindro:\n");
    scanf("%lf", &altura);

    volume = PI * (raio_base * raio_base) * altura;
    area = 2 * PI * raio_base * (altura + raio_base);

    printf("volume do cilindro = %.2lf u. v.\n", volume);
    printf("area do cilindro = %.2lf u. a. \n", area);

    return 0;
}
