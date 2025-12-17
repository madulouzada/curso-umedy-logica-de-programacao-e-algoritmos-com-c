#include <stdio.h>

void troca(int *a, int *b)
{
    int temp = *a; // criei uma varavel temporaria par armazenar o valor de A, para poder fazer a ordenação lá em baixo sem perder o valor de A.
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Antes da troca: x = %d, y = %d\n", x, y); // x=10, y=20
    troca(&x, &y);                                    // passa os endereços de x e y

    printf("Depois da troca: x = %d, y = %d\n", x, y); //

    return 0;
}