#include <stdio.h>
// Classificação do nível da partida com base na quantidade de torcedores
// Escreva um programa que solicita ao usuário:
// A capacidade total do estádio.
// A quantidade de torcedores presentes no jogo.
// Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:
// Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"
// Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"
// Se estiver entre 50% e 70% (inclusive): "Público razoável."
// Se estiver abaixo de 50%: "Morumbis"

int main()
{
    int capacidade, torcedores;
    float ocupacao;

    printf("Digite a capacidade total do estadio: ");
    scanf("%d", &capacidade);

    printf("Digite a quantidade de torcedores presentes: ");
    scanf("%d", &torcedores);

    ocupacao = (float)torcedores / capacidade * 100;

    printf("\n======RESULTADO=======\n");

    printf("Lotação : %.2f%% \n", ocupacao);
    if (ocupacao > 90)
    {
        printf("Lotado ! \n");
    }
    else if (ocupacao >= 70)
    {
        printf("Ótima presença de público! \n");
    }
    else if (ocupacao >= 50)
    {
        printf("Público razoável.\n");
    }
    else
    {
        printf("Morumbis. \n");
    }

    return 0;
}
