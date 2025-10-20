#include <stdio.h>
// Média de Gols por Partida
// Escreva um programa que receba o número total de gols de um jogador e a quantidade de partidas jogadas. Depois, calcule e exiba a média de gols por partida.
int main()
{

    int gols, partidas;
    float media;

    printf("Digite a quantiddade de gols: ");
    scanf("%d", &gols);

    printf("\nDigite a quantidade de partidas jogadas: ");
    scanf("%d", &partidas);

    media = (float)gols / partidas; // tem que por o float antes da divisão por conta de quando for ter divisão que possuem resultados como float;

    printf("\nMedia: %.2f", media);

    return;
}