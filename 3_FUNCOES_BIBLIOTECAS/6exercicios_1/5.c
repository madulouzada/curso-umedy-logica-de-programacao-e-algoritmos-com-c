/*
5. Criar um padrão de asteriscos
Crie uma função que imprime um quadrado de asteriscos com lado n. O usuário dirá qual o valor de n e qual caracter será usado (*, #, $ ...).

*/

#include <stdio.h>

void criarQuadrado(int n, char caracter)
{
    for (int i = 0; i < n; i++) // linhas
    {
        for (int j = 0; j < n; j++) // colunas
        {
            printf("%c", caracter);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char caracter;

    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &n);

    printf("Digite qual caracter voce quer: ");
    scanf(" %c", &caracter);

    criarQuadrado(n, caracter);

    return 0;
}