/* <string.h> - Manipulação de strings
    PRINCIPAIS FUNÇÕES

- strlen() - tamanho da string
- strcpy() - copia uma string
- strcmp() - compara strings
- strcat() - concatena strings

*/

#include <stdio.h>
#include <string.h>

int main()
{

    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome); // concatena
    printf("Nome completo: %s\n", nome);

    printf("Tamanho: %d\n", strlen(nome)); // tamanho da string

    if (strcmp(nome, "Joao Silva") == 0) // compara se a string é igul (== 0 , se é TRUE)
    {
        printf("Nome correto!\n");
    }
    else
    {
        printf("Nome incorreto!\n");
    }

    return 0;
}