/*
Trabalhando com strings

Crie um programa que recebe 5 nomes e imprime apenas os nomes que contêm um determinado caracter definido pelo usuário. Exemplo: letra 'a'.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char nomes[5][10];
    char letras;
    int j, encontrou; // declara o J aqui, para fazer a utilização dele, além do for

    // Entrada da letra a ser buscada
    printf("Digite a letra que deseja buscar: ");
    scanf(" %c", &letras);

    // Entrada do 5 nomes
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o nome %d: ", i + 1);
        scanf(" %s", nomes[i]);
    }

    // verifica e imprime nomes que contem a letra
    printf("\nNomes que contem a letra '%c':\n", letras);

    for (int i = 0; i < 5; i++) // nomes
    {
        if (strchr(nomes[i], letras) != NULL) // STRCHR - procurando um carcter especifico dentro da string
        {

            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}