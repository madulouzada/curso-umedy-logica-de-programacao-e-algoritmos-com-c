#include <stdio.h>

int main()
{
    printf("Contagem regressiva para a bomba explodir: \n");

    for (int index = 10; index >= 1; index--) // inicializa a variavel em 10 e vai descrementando ate acabar.
    {
        printf("%d...\n", index);
    }
    printf("## BOOM! ##\n");
    return 0;
}
