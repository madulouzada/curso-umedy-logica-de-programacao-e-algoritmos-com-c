#include <stdio.h>

int main()
{

    int numero = 42;
    int *n = &numero; // ponteiro
    // este caso ele esta apontando (&) para o endereço de memoria da variavel numero

    printf("Antes: %d\n", numero); // aqui ele trazendo o endereço que foi passando pelo ponteiro da variavel nuemro = 42

    *n = 10; // ele este mudando o endereço da varivel numero, alterando o valor de 42 para 10

    printf("Depois: %d\n", numero);

    return 0;
}
