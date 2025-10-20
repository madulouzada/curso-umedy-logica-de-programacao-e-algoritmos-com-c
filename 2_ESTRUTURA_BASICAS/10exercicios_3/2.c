#include <stdio.h>

/*
Soma dos Números de 1 a n:
O usuário digita um número n, e o programa calcula a soma de todos os números de 1 até n.

    Saída esperada (se o usuário digitar 5):
        A soma de 1 ate 5 e: 15
        (Cálculo: 1 + 2 + 3 + 4 + 5 = 15)
*/

int main()
{
    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += i; // +=, é um acumulador, que faz a incrementação e armazena na variavel soma
    }

    printf("A soma de 1 ate %d e: %d", n, soma);

    return 0;
}
