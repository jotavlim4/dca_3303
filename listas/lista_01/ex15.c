#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

#define max(a, b) (a) > (b) ? a : b 

int main(void){
    int x, y, z;
    int maior;

    printf("digite três valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    maior = max(x, y);
    maior = max(maior, z);

    printf("o maior valor é %d\n", maior);    
    return 0;
}
