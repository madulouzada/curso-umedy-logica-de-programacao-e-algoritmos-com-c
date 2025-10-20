#include <stdio.h>
// Verificação de Cartão Vermelho
// Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. Escreva um programa que verifica se um jogador será expulso, baseado na quantidade de cartões amarelos.
int main()
{

    int gols, partidas;
    float media;

    printf("Digite a quantiddade de gols: ");
    scanf("%d", &gols);

    printf("\nDigite a quantidade de partidas jogadas: ");
    scanf("%d", &partidas);

    media = (float)gols / partidas;

    printf("\nMedia: %.2f", media);

    return 0;
}
