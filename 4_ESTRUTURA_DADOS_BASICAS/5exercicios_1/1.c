/*
​1 – Somando elementos de uma matriz
Um banco quer somar todos os valores de uma matriz 2x3 que representa o valor arrecadado por 2 agências em 3 dias. Imprima o total arrecadado.

exemplo:
Agencia 1, Dia 1: 1890
​Agencia 1, Dia 2: 12000
​Agencia 1, Dia 3: 7000
​Agencia 2, Dia 1: 976
​Agencia 2, Dia 2: 123
​Agencia 2, Dia 3: 80
​
​Total arrecadado: R$22069
*/

#include <stdio.h>
int main()
{
    int valor[3][2], soma = 0; // agora não terei os valores passados, farei um loop para capturar os valores desejados

    for (int i = 0; i < 2; i++) // linhas
    {
        for (int j = 0; j < 3; j++) // colunas
        {
            printf("Agencia %d, Dia %d: ", i + 1, j + 1);
            scanf("%d", &valor[i][j]);
            soma += valor[i][j];
        }
    }

    printf("\nTotal arrecadado: R$%d", soma);

    return 0;
}