#include <stdio.h>
#include <stdlib.h> // biblioteca para abrir o arquivo de texto

int main()
{

    FILE *arquivo;
    arquivo = fopen("dados.txt", "r"); // fopen = abrir uma rquivo que ja existi, ou riar um arquio (W = para escrever // R = para ler)

    system("notepad dados.txt"); // função para abrir o arquivo de texto (onde abrir - espaço - nome do arquivo)

    return 0;
}