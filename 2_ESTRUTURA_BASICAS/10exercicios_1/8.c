#include <stdio.h>
// Avaliar o desempenho do jogador
// Escreva um programa que pede ao usuário a quantidade de gols marcados por um jogador em uma temporada e verifica:
// Se fez mais de 10 gols, exibir "Excelente temporada!"
// Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"
// Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."
int main()
{

    int gols;

    printf("Digite a quantidade de gols marcados pelo jogador: ");
    scanf("%d", &gols);

    if (gols > 10)
    { // se for verdadeiro, exibi a mensagem de baixo, caso seja falsa, pula para proxima condição
        printf("Execelente temporada");
    }
    else if (gols >= 5)
    {
        printf("Boa temporada!");
    }
    else
    {
        printf("Temporada abaixo do esperado");
    }

    return 0;
}
