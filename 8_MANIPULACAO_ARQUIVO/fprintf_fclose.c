#include <stdio.h>
#include <stdlib.h> // biblioteca para abrir o arquivo de texto

int main()
{

    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo! \n");
        return 1;
    }
    // criar uma linha que vai ser escrita dentro de uma arquivo.
    fprintf(arquivo, "Gustavo \n");
    fprintf(arquivo, "Maria \n");
    fclose(arquivo);

    // primeiro passa o nome do arquivo = arquivo;
    // segundo, passa oque quer que esteja dentro do arquivo;
    // terceiro, fecha o arquivo = fclose()

    return 0;
}