/*
Crie um programa em C que:
- Peça ao usuario o tamanho de um vetor de inteiros.
- Aloque dinamicaente o vateor usando malloc.
- Preencha o vetor com valores digitados pelo usuario.
- Imprima o vetor

Crie uma função que inverte a ordem dos elemntos do vetor(usando ponteiros).
imprima o vetor invertido
*/

void inverteVetor(int *vetor, int tamanho)
{
    int temp;

    for (int i = 0; i < tamanho / 2; i++)
    {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tamanho, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Deu ruim! ");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o numero %d:", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n=== VETOR  ORIGINAL ===\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    ////////invertendo

    inverteVetor(vetor, tamanho);

    printf("\n=== VETOR  INVERTIDO ===\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}