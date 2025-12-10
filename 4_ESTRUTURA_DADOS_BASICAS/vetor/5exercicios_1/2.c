/*
Encontrando o Maior Dano Causado

Crie um programa que leia o dano causado em 4 ataques e exiba qual foi o ataque mais forte.
EXEMPLO:
Digite o dano de 4 ataques:

Ataque 1: 10
Ataque 2: 33
Ataque 3: 99
Ataque 4: 78

Maior dano causado: 99
*/
#include <stdio.h>

int main()
{
    int ataque[4], maior = 0; // tem que começar com alguma valor,para comprar o maior

    printf("Digite o dano de 4 ataques: \n ");

    for (int i = 0; i < 4; i++)
    {
        printf("Ataque %d: ", i + 1);
        scanf("%d", &ataque[i]);

        if (ataque[i] > maior)
        {
            maior = ataque[i];
        }
    }

    printf("Maior dano causado: %d\n", maior);

    return 0;
}