/*
3. Implemente uma lista ligada simples que insere 5 números inteiros no final da lista e imprime todos.​
*/
#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *proximo;
};

int main()
{

    struct No *inicio = NULL, *fim = NULL, *novo;
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero %d: ", i + 1);
        scanf("%d", &num);

        novo = (struct No *)malloc(sizeof(struct No));
        novo->valor = num;
        novo->proximo = NULL;

        if (inicio == NULL)
        {
            inicio = novo;
            fim = novo;
        }
        else
        {
            fim->proximo = novo;
            fim = novo;
        }
    }

    printf("Numeros da lista:\n");
    struct No *temp = inicio;
    while (temp != NULL)
    {
        printf("%d", temp->valor);
        temp = temp->proximo;
    }

    return 0;
}