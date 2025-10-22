/*
Fézinha da mega

Crie um programa em C que simule a geração de 6 números aleatórios entre 1 e 60, como em um jogo de loteria (ex: Mega Sena). Os números devem ser exibidos na tela. Não é necessário garantir que os números sejam diferentes entre si neste primeiro momento.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    //  int numero = (rand() % 60) + 1;
    // operador % pega o resto da divisão.
    // vai gerar um número entre 0 e 59, porque o resto de uma divisão por 60 nunca é 60 (vai de 0 até 59).
    // Se quiser, por exemplo, um número entre 1 e 60, basta somar 1

    for (int i = 0; i < 6; i++)
    {
        int numero = (rand() % 60) + 1; // como eu fiz um for, coloquei ele dentro do for, para os numeros aleatorios, retorna diferente.
        printf("Numero aleatorio : %d\n", numero);
    }

    return 0;
}