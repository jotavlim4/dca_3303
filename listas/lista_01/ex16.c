#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define min(a, b) (a) < (b) ? a : b
#define max(a, b) (a) > (b) ? a : b

int main(void){
    int x, y, z;
    int menor, maior;

    printf("digite três valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    menor = min(x, y);
    menor = min(menor, z);

    maior = maior(x, y);
    maior = maior(maior);

    



    return 0;
}
