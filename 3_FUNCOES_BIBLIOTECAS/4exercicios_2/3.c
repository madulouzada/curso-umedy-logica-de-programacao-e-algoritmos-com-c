/*
Conversor de temperatura

Um sensor envia a temperatura de um ambiente como texto, por exemplo "25.7". Escreva um programa que leia essa temperatura como string, converta para float com atof e depois informe se o ambiente está frio (abaixo de 18°C), agradável (entre 18°C e 26°C) ou quente (acima de 26°C).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char tempStr[10];
    float temperatura;

    printf("Digite a temperatura ambiente (ex: 23.5): ");
    scanf("%s", tempStr);

    temperatura = atoi(tempStr);
    printf("Temperatura convertida: %.2f°C\n", temperatura);

    if (temperatura < 18.0)
    {
        printf("Ambiente frio.\n");
    }
    else if (temperatura <= 26.0)
    {
        printf("Ambiente agradavel.\n");
    }
    else
    {
        printf("Ambiente quente.\n");
    }

    return 0;
}