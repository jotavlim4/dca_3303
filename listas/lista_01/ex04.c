#include <stdio.h>   
#include <stdlib.h> 
#include <string.h>  
#include <math.h>   
#include <ctype.h>   
#include <stdbool.h> 
#include <limits.h>
#include <float.h>

int main(void){
    int x, y, q, r;

    printf("digite dois números inteiros: \n");
    scanf("%d %d", &x, &y);

    q = x / y;
    r = x % y;

   printf("quociente e resto da divisão %d/%d:\n", x, y); 
   printf("q = %d e r = %d\n", q, r);

    return 0;
}
