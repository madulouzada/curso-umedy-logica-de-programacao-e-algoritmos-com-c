#include <stdio.h>
// apresentação do jogador
// Crie um programa que peça o primeiro nome de um jogador, sua idade e a quantidade de gols que ele já fez na carreira. Em seguida, exiba essas informações na tela.
int main()
{
    char nome[10];
    int idade;
    int qtdgol;

    printf("Digite seu primeiro nome: ");
    scanf("%s", &nome);

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite quatidade de gol que fez: ");
    scanf("%d", &qtdgol);

    printf("\n===============================\n");

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Quantidade de gol: %d\n", qtdgol);

    return 0;
}