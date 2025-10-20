#include <stdio.h>

int main()
{
    int idade;

    printf("Digiti a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("MAIOR");
    }
    else
    {
        printf("MENOR");
    }

    return 0;
}

// =  -> atribuição
// == -> igualdade
// >  -> maior
// <  -> menor
// >= -> maior ou igual
// <= -> menor ou igual
// ! -> diferente
// && -> AND/E
// || -> OR/OU