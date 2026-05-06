#include <stdio.h>   
int divide(int n, int divisor);

int main(void){
    int n;

    printf("digite um número inteiro para encontrarmos seus divisores:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        if(divide(n, i))
            printf("%d ", i);

    putchar('\n');

    return 0;
}

int divide(int n, int divisor){
    return n % divisor == 0;
}
