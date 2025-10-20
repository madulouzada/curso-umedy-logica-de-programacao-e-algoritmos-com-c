#include <stdio.h>

int main()
{
    int n;

    printf("Digite um numero para p tamanho do quadrado: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) // escrevendo nossas linhas
    {
        for (int j = 0; j < n; j++) // escrevendo nossas colunas
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
