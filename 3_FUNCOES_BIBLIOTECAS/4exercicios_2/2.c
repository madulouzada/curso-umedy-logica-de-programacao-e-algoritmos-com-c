/*
Cadastro de idade

Um sistema de cadastro recebe a idade de uma pessoa como texto (string). Escreva um programa em C que leia essa informação como uma string e depois converta para inteiro usando atoi. Em seguida, exiba a idade e verifique se a pessoa é maior de idade (18 anos ou mais).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char idadeStr[10];
    int idade;

    printf("Digite uma idade: ");
    scanf("%s", idadeStr);

    idade = atoi(idadeStr);
    printf("Idade convertida: %d\n", idade);

    if (idade >= 18)
    {
        printf("Maior de idade.\n");
    }
    else
    {
        printf("Menor de idade.\n");
    }

    return 0;
}