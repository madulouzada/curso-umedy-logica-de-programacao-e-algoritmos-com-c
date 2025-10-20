#include <stdio.h>

/*
Números Pares de 1 a n
O usuário digita um número n, e o programa imprime todos os números pares de 1 até n.

Saída esperada (se o usuário digitar 10):
Numeros pares de 1 ate 10:
2 4 6 8 10
*/

int main()
{

    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Numeros pares de 1 ate %d: \n", n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // usando modulo (%), para pegar o resto da divisão , no caso se for = a zero ,é PAR
        {
            printf("%d", i);
        }
    }

    return 0;
}
