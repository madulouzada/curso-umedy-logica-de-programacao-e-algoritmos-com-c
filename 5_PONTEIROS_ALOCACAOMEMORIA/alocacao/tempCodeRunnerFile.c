#include <stdio.h>
#include <stdlib.h> // para usar o malloc

int main()
{
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro: memoria insuficiente.");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i * 10;
    }

    printf("Vetor dinamico populado: \n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}