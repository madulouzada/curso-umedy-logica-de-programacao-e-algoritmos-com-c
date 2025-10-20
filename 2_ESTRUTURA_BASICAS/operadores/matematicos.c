
#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 2; // declaração de varialveis do mesmo tipo
    int resultado;

    resultado = num1 + num2;

    printf("Adicao: %d + %d = %d\n", num1, num2, resultado);
    printf("Subtracao: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Divisao: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Modulo: %d %% %d = %d\n", num1, num2, num1 % num2); // é o resto que sobra da divisão  // MUITO USADO PARA DESCOBRIR SE O NÚMERO É PAR OU IMPAR

    return 0;
}