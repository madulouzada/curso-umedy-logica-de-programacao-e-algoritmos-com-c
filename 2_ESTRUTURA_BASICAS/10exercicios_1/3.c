#include <stdio.h>
// Conversão de Minutos para Tempo de Jogo
// Peça ao usuário para digitar o tempo jogado em minutos. Depois, converta esse valor para horas e minutos e exiba o resultado.
int main()
{
    int minutos, horas, min_restante;

    printf("Digite o tempo jogado em minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;
    min_restante = minutos % 60;

    printf("Resultado: %d horas e %d minutos", horas, min_restante);

    return 0;
}
