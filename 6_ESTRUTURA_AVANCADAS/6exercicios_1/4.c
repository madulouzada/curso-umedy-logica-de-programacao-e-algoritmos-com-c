/*
4. A partir do exercício anterior, adicione uma função que busca um número na lista e retorna se foi encontrado ou não.​
*/
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

int buscar(struct No *inicio, int numeroBuscado)
{
    while (inicio != NULL)
    {
        if (inicio->valor == numeroBuscado)
        {
            return 1;
        }
        inicio = inicio->proximo;
    }
    return 0;
}

int main()
{

    struct No *inicio = NULL, *fim = NULL, *novo;
    int num, busca;

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

    printf("digite um numero que quer buscar: ");
    scanf("%d", &busca);

    if (buscar(inicio, busca))
    {
        printf("Encontrado!");
    }
    else
    {
        printf("Nao encontrado");
    }

    return 0;
}