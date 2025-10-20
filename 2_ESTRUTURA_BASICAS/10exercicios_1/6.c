#include <stdio.h>
// Verificação de Cartão Vermelho
// Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. Escreva um programa que verifica se um jogador será expulso, baseado na quantidade de cartões amarelos.
int main()
{
    int cartoes = 100;

    if (cartoes == 2)
    {
        printf("Jogador Expulso.");
    }
    else
    {
        printf("Jogador continua no jogo.");
    }

    return 0;
}
