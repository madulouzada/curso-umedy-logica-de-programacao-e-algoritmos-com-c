#include <stdio.h>

// função para particionar o  vetor usando o pivô do meio
int particiona(int vetor[], int inicio, int fim)
{
    int meio = inicio + (fim - inicio) / 2;

    // troca vetor[meio] <-> vetor[fim]
    int temp = vetor[meio];
    vetor[meio] = vetor[fim];
    vetor[fim] = temp;

    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        if (vetor[j] < pivo)
        {
            i++;

            // troca vetor[i] <-> vetor [j]
            int temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
        }
    }

    // troca vetor [ i + 1] < - > vetor[fim]
    temp = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temp;
    return i + 1;
}

void quickSort(int vetor[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int indicePivo = particiona(vetor, inicio, fim);
        quickSort(vetor, inicio, indicePivo - 1); // parte esquerda
        quickSort(vetor, indicePivo + 1, fim);    // parte direita
    }
}

void imprimirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int numeros[] = {3, 5, 8, 9, 2, 1, 4, 6, 7};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("\nVetor original: \n");
    imprimirVetor(numeros, tamanho);

    quickSort(numeros, 0, tamanho - 1);

    printf("\nVetor ordenado: \n");
    imprimirVetor(numeros, tamanho);

    return 0;
}
