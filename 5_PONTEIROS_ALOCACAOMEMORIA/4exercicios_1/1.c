/*
Exercício 1: Soma de Dois Números com Ponteiros
Crie uma função soma que recebe dois ponteiros para inteiros e retorna a soma dos valores apontados.
*/

#include <stdio.h>

int soma(int *a, int *b)
{
    return *a + *b;
}

int main()
{

    int num1 = 3, num2 = 2;

    printf("Soma: %d\n", soma(&num1, &num2));

    return 0;
}