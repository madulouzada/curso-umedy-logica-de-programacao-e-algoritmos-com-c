/*
Exercício 2: Vetor Dinâmico com Média
Aloque dinamicamente um vetor de n floats (digitado pelo usuário), preencha-o com valores e calcule a média.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanhoVetor;
    float *vetor, soma = 0.0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    vetor = (float *)malloc(tamanhoVetor * sizeof(float));

    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);

        soma += vetor[i];
    }

    printf("Media: %.2f", soma / tamanhoVetor);

    return 0;
}