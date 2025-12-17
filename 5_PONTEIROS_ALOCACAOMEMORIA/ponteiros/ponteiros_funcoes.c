#include <stdio.h>

void aumenta(int *n)
{
    (*n)++; // preciso por a incrementação dentro do ponteiro
}

int main()
{

    int numero = 5;

    aumenta(&numero);

    printf("%d", numero);

    return 0;
}