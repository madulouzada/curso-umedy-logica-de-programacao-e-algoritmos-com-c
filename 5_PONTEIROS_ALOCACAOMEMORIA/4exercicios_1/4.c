/*
Exercício 4: Matriz Dinâmica com Soma de Linhas
Aloque dinamicamente uma matriz m x n, preencha-a e imprima a soma de cada linha.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m, n, **matriz, soma; // dois endereços por isso dois * de ponteiro de linhas e colunas

    printf("Digite as dimensoes (m n ): ");
    scanf("%d %d", &m, &n);

    matriz = (int **)malloc(m * sizeof(int *));

    for (int i = 0; i < m; i++)
    {
        soma = 0;
        matriz[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i + 1, soma);
    }
    free(matriz);
    return 0;
}