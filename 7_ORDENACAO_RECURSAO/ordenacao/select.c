#include <stdio.h>

void imprimirVetor(int numeros[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }
}

void selectionSort(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        int indiceMenor = i;

        for (int j = i + 1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[indiceMenor])
            {
                indiceMenor = j;
            }
        }

        if (indiceMenor != i)
        {
            int temp = vetor[i];
            vetor[i] = vetor[indiceMenor];
            vetor[indiceMenor] = temp;
        }
    }
}

int main()
{

    int numeros[] = {3, 5, 2, 1, 4};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Vetor original: \n");
    imprimirVetor(numeros, tamanho);

    selectionSort(numeros, tamanho);

    printf("\nVetor ordenado: \n");
    imprimirVetor(numeros, tamanho);

    return 0;
}