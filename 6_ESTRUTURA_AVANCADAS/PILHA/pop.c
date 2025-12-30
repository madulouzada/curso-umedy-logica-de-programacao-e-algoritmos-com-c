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

int top()
{
    if (topo == -1)
    {
        printf("Pilha vazia\n");
        return -1;
    }
    return pilha[topo];
}

int pop()
{
    if (topo == -1)
    {
        printf("Pilha vazia\n");
        return -1;
    }
    topo--;
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
    push(99);

    imprimirPilha();

    printf("Topo atual %d\n", top());

    pop();
    printf("Topo atual %d\n", top());

    return 0;
}