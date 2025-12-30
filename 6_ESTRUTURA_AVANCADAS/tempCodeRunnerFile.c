#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *proximo;
};

int main()
{

    int tamanhoLista;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanhoLista);

    if (tamanhoLista <= 0)
    {
        printf("valor invalido");
        return 1;
    }

    return 0;
}