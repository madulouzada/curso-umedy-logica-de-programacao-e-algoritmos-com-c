/*  <stdlib.h> - utilidade gerais

- rand() - número aleatório (gera apenas uma vez e salva ele)
- srand() - inicializa o gerador com uma semente (gera toda vez que roda o sistema )
- atoi(), atof() - converte string para int e float
- exit() - encerra o programa

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*int main()
{
    // sempre retona o mesmo número quando compila
    int numero = rand() % 100; // entre 0 e 99

    printf("Numero aleatorio : %d\n", numero);

    return 0;
}*/

/*int main()
{    //  retona número diferentes toda vez quando compila, pois roda em cima do tempo (minutos, segundos), então sempre vai ser alterado;
    srand(time(NULL));
    int numero = rand() % 100; // entre 0 e 99

    printf("Numero aleatorio : %d\n", numero);

    return 0;
}*/

int main()
{

    char texto[] = "123";
    int valor = atoi(texto);

    printf("Convertido: %d\n", valor);

    return 0;
}