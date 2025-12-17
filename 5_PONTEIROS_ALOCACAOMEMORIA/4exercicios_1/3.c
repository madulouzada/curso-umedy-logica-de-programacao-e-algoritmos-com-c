/*
Exercício 3: Inversão de String com Ponteiros
Crie uma função que inverte uma string alocada dinamicamente usando ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverteString(char *string)
{
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho / 2; i++)
    {
        char temp = string[i];
        string[i] = string[tamanho - 1 - i];
        string[tamanho - 1 - i] = temp;
    }
}

int main()
{

    char *string = (char *)malloc(100 * sizeof(char));

    printf("Digite umas string: ");
    scanf("%s", string);

    inverteString(string);

    printf("String invertida: %s", string);

    return 0;
}