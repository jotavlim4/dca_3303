#include <stdio.h>   

double media_idade(int *idades, int quantidade);

int main(void){
    int num_alunos;
    
    printf("digite a quantidade de alunos da turma:\n");
    scanf("%d", &num_alunos);

    if(num_alunos <= 0){
        printf("quantidade inválida!\n");
        return 1;
    }

    int idades[num_alunos];

    printf("digite a idade de cada um deles: \n");
    for(int i = 0; i < num_alunos; i++)
        scanf("%d", &idades[i]);

    printf("a média de idades é %.1lf\n", media_idade(idades, num_alunos));

    return 0;
}

double media_idade(int *idades, int quantidade){
    int i;
    double soma;

    soma = 0;
    for(i = 0; i < quantidade; i++)
        soma += idades[i];

    return soma / quantidade;
}   
