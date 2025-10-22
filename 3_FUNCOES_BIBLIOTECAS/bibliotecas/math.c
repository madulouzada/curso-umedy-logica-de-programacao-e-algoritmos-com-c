/* <math.h> - funções matematicas

- sqrt() - raiz quadrada ;
- pow() - potencia ;
- abs((inteiro)) / fabs((float)) - valor absoluto  [retorna valor, sem se importa com sinal de operação ];
- sin(), cos(), tan() - trigonometria ;

 */

#include <stdio.h>
#include <math.h>

int main()
{
    int base = 2, expoente = 3;

    printf("2 elevado a 3 : %.2f\n", pow(base, expoente));
    printf("Raiz quadrada de 25 : %.2f\n", sqrt(25));

    return 0;
}