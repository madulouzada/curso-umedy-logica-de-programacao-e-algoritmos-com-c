/*
1. Crie uma estrutura chamada pessoa com os campos: nome, idade e altura. Leia os dados de 3 pessoas e imprima os dados da mais velha.
*/

#include <stdio.h>

struct Pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{

    struct Pessoa pessoas[3];
    int maisVelha = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("====Pessoa %d====\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome); // ACEITA POR ESPAÇO NA STRING

        printf("Digite a Idade: ");
        scanf(" %d", &pessoas[i].idade); // ACEITA POR ESPAÇO NA STRING

        printf("Digite a Altura: ");
        scanf(" %f", &pessoas[i].altura); // ACEITA POR ESPAÇO NA STRING

        if (pessoas[i].altura > pessoas[maisVelha].idade)
        {
            maisVelha = i;
        }
    }
    printf("Pessoa mais velha: %s", pessoas[maisVelha].nome);

    return 0;
}