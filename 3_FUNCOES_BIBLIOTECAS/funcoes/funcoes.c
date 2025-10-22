#include <stdio.h>
// FUNÇÃO DECLARADA
int somar(int numero1, int numero2)
{ // O VALOR QUE RETORNAR SERA COLOCADO NO soma(), dentro do main
    return numero1 + numero2;
}

int main()
{
    printf("Resultado: %d\n", somar(3, 2));
    printf("Resultado: %d\n", somar(5, 5));
    printf("Resultado: %d\n", somar(10, 50));
    printf("Resultado: %d\n", somar(30, 2));
    return 0;
}