#include <stdio.h>

int tamanho_maximo = 10;
int pilha[10];
int topo = -1;

void push(int valor)
{
    if (topo == tamanho_maximo - 1)
    {
        printf("Erro: pilha cheia\n");
        return;
    }

    topo++;
    pilha[topo] = valor;
}

void imprimirPilha()
{
    if (topo == -1)
    {
        printf("Pilha vazia\n");
        return;
    }
    printf("Elemento da Pilha: \n");
    for (int i = topo; i >= 0; i--)
    {
        printf("%d\n", pilha[i]);
    }
}

int main()
{

    push(10);
    push(67);

    imprimirPilha();

    return 0;
}