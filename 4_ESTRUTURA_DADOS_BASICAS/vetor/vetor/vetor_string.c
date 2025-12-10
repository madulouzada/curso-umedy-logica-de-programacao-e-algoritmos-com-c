#include <stdio.h>

int main()
{

    //  char xablau[20] = "xablau";

    char xablau[3][20] = {"gustavo", "Joao", "Maria"};
    // [3] - quantidade de elementos que quero colocar, por exempolo, 3 palavras [20]- cada palavra podeter ate 20 caractre

    printf("%s", xablau[0]);
    // printf("%c", xablau[0][0]); pega do primeiro elemento a primeira palavra.
    // LEMBRA - SE, 1 caracter, é %c, de dois para mais %s

    return 0;
}