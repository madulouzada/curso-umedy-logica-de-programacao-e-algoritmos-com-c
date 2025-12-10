#include <stdio.h>

int main()
{
    int pontos[10], soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite os pontos da posicao %d:", i + 1); // utilizar dessa forma, pois se incializar com i=1,você percebe a posição 0 do vetor
        scanf("%d", &pontos[i]);

        soma += pontos[i]; // ele soma e incrementar (o soma recebe o valor do pontos, e depois que o loop rodar, ele soma e incrementa novamente)
    }
    printf("Total de pontos: %d", soma);

    return 0;
}