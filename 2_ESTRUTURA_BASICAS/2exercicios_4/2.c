#include <stdio.h>
/*
 Imagine que você está construindo um jogo em que o jogador deve adivinhar um número secreto entre 1 e 10. O programa deve continuar pedindo palpites até que o número correto seja adivinhado. Use DO WHILE para garantir que o jogador tenha ao menos uma tentativa. O número secreto deve ser 7. Ao acertar, exiba "Você acertou!".
*/

int main()
{

    int palpite;

    do
    {
        printf("Adivinhe o numero (de 1 ao 10): ");
        scanf("%d", &palpite);
    } while (palpite != 7);

    printf("Voce acertou!");

    return 0;
}