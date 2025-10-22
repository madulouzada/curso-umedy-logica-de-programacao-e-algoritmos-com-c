#include <stdio.h>
/* verifica se um númeo é par ou impar.
Crie uma função que recebe a um número inteiro e retorne PAR se for par e IMPAR se for impar */

int parImpar(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (parImpar(num) == 1)
    {
        printf("PAR");
    }
    else
    {
        printf("IMPAR");
    }

    return 0;
}