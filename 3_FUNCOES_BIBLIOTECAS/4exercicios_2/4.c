/*
Detector de caracteres proibidos

Imagine que você está desenvolvendo um sistema para um jogo online que proíbe o uso de certos caracteres especiais no nome dos jogadores. Escreva um programa em C que:

- Leia o nome de usuário digitado pelo jogador (máximo 50 caracteres);
- Calcule o tamanho do nome usando strlen();
- Verifique se o nome contém algum dos seguintes caracteres proibidos: @, #, $, %, !;
- Informe ao usuário quantos caracteres inválidos foram encontrados;
- Mostre uma mensagem avisando se o nome é válido ou inválido com base nessa verificação.

Exemplo de saída:
- Digite seu nome de usuario: x@bl@u!
- Nome invalido! 3 caractere(s) proibido(s).
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int tamanho, proibidos = 0;

    printf("Digite seu nome de usuario: ");
    scanf("%s", nome);

    tamanho = strlen(nome);
    for (int i = 0; i < tamanho; i++)
    {
        char c = nome[i];
        if (c == '@' || c == '#' || c == '$' || c == '%' || c == '!')
        {
            proibidos++;
        }
    }

    if (proibidos > 0)
    {
        printf("Nome invalido! %d caractere(s) proibido(s).\n", proibidos);
    }
    else
    {
        printf("Nome valido!\n");
    }

    return 0;
}