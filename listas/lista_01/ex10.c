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
    int a, b;

    printf("digite dois números inteiros:\n");
    scanf("%d %d", &a, &b);

    if(a == b){
        printf("%d == %d \n", a, b);
        return 0;
    }

    if(max(a, b) == a)
        printf("o maior é %d\n", a);
    else
        printf("o maior é %d\n", b);    
    
    return 0;
}
