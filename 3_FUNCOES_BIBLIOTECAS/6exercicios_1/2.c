/*
2. Contar vogais em uma palavra
Crie uma função que recebe uma string (char[ ]) e retorna a quantidade de vogais.

Dica: Toda string termina com '\0'.

*/
#include <stdio.h>

int contarVogais(char palavra[])
{
    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; i++) // palavra[i], olha a palavra no caso a letra que esta na posição i, ou seja , a posição que o loope esta percorrendo
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    char texto[100];

    printf("Digite uma palavra: ");
    scanf("%s", texto); // não precisa por o &, pois ja esta declarado o tamanho na declaração da variavel texto
    printf("Quantidade de vogais: %d", contarVogais(texto));

    return 0;
}