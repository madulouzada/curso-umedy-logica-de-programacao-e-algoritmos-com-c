#include <stdio.h>

int fila[10];
int inicio = 0;
int fim = 0;
int tamanho_maximo = 10;
void enqueue(int valor)
{
    if (fim == tamanho_maximo)
    {
        printf("Fila cheia\n!");
        return;
    }
    fila[fim] = valor;
    fim++;
}

void dequeue()
{
    if (inicio == fim)
    {
        printf("fila vazia!\n");
        return;
    }

    for (int i = 0; i < fim - 1; i++)
    {
        fila[i] = fila[i + 1];
    }
    fim--;
}

int main()
{

    enqueue(1);
    enqueue(28);
    enqueue(7);
    enqueue(100);

    printf("Primeirto elemento da fila: %d \n", fila[0]);
    printf("Ultimo elemento da fila: %d\n", fim);

    dequeue();
    printf("Primeirto elemento da fila: %d\n", fila[0]);
    printf("Ultimo elemento da fila: %d\n", fim);

    return 0;
}