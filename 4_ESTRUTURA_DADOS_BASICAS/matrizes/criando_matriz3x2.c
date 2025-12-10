#include <stdio.h>
int main()
{

    int notas[3][2] = {
        {1, 2},  // linha 0 , coluna 0/1
        {10, 6}, // linha 1 , coluna 0/1
        {7, 4}   // linha 2 , coluna 0/1
    };

    printf("%d", notas[2][1]); // aqui estou passando para retor os valor da matriz...
                               // aqui por exemplo retorna numero 4 (linha 2 coluna 1)

    return 0;
}