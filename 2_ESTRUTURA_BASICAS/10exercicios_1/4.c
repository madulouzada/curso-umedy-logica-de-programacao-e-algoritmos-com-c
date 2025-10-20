#include <stdio.h>
// Calculando o Aproveitamento de um Time
// Crie um programa que peça o número de vitórias, empates e derrotas de um time. Depois, calcule o número total de pontos, seguindo a regra:
// Vitória = 3 pontos
// Empate = 1 ponto
// Derrota = 0 pontos
int main()
{

    int vitorias, empates, derrotas, pontos;

    printf("Digite o numero de vitorias: ");
    scanf("%d", &vitorias);

    printf("\nDigite o numero de empates: ");
    scanf("%d", &empates);

    printf("\nDigite o numero de derrotas: ");
    scanf("%d", &derrotas);

    pontos = (vitorias * 3) + empates;

    printf("\nTotal de pontos: %d", pontos);

    return 0;
}
