#include <stdio.h>

typedef unsigned long long ull;  

ull fatorial(ull n);

int main(void){
    ull numero;

    printf("digite um número inteiro para calcularmos seu fatorial:\n");
    scanf("%llu", &numero);

    printf("o fatorial de %llu é %llu\n", numero, fatorial(numero));

    return 0;
}

ull fatorial(ull n){
    ull fat = 1;

    for(ull i = 1; i <= n; i++)
        fat *= i;

    return fat;
}
