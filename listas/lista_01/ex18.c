#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define EPSILON 1e-9

int forma_triangulo(double a, double b, double c);
int lados_iguais(double a, double b, double c);

int main(void){
    double a, b, c;

    printf("digite valores para lados de triangulos:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(!forma_triangulo(a, b, c)){
        printf("esses valores foram um triangulo degenerado!\n");
        return 0;
    }

    int iguais = lados_iguais(a, b, c);
    if(iguais == 0)
        printf("o triangulo é escaleno!\n");
    else if(iguais == 2)
        printf("o triangulo é isósceles!\n");
    else
        printf("o triangulo é equilátero\n"); 

    return 0;
}

int forma_triangulo(double a, double b, double c){
    if(a <= 0 || b <= 0 || c <= 0)
        return 0;

    if(a >= b + c || b >= a + c || c >= a + b)
        return 0;

    return 1;    
}

int lados_iguais(double a, double b, double c){
    int num_lados = 0;

    if(fabs(a - b) < EPSILON && fabs(b - c) < EPSILON)
        num_lados = 3;
    
    else if(fabs(a - b) < EPSILON || fabs(a - c) < EPSILON || fabs(b - c) < EPSILON)
       num_lados = 2;


    return num_lados;
}


