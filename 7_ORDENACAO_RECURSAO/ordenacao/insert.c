#include <stdio.h>

void imprimirVetor(int numeros[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", numeros[i]);
    }
}

void insertSort(int numeros[], int tamanho)
{
    for (int i = 1; i < tamanho; i++)
    {
        int chave = numeros[i];

        int j = i - 1;

        while (j >= 0 && numeros[j] > chave)
        {
            numeros[j + 1] = numeros[j];
            j--;
        }
        numeros[j + 1] = chave;
    }
}

int main()
{

    int numeros[] = {3, 5, 8, 9, 2, 1, 4, 6, 7};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Vetor original: \n");
    imprimirVetor(numeros, tamanho);

    insertSort(numeros, tamanho);

    printf("\nVetor ordenado: \n");
    imprimirVetor(numeros, tamanho);

    return 0;
}