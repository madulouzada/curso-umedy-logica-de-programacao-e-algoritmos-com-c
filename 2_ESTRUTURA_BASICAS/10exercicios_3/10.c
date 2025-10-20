#include <stdio.h>

/*
Triângulo de asteriscos ***
Faça um programa que leia um número N e imprima um triângulo de asteriscos com altura N e largura 2N-1.

Exemplo de N = 4:
   *
  ***
 *****
*******
*/

int main()
{

    int altura;

    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= altura - i; j++) // lopp para dar o espaço
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) // lopp para dar o espaço
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
