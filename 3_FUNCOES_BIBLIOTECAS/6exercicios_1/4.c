/*
4. Classificar notas de alunos
Crie uma função que receba a nota de um aluno e imprima:

Aprovado (nota >= 6)
Recuperação (nota >= 4 e < 6)
Reprovado (nota < 4)

*/
#include <stdio.h>

void classificarNotas(float nota)
{
    if (nota >= 6)
    {
        printf("Aprovado\n");
    }
    else if (nota >= 4)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}

int main()
{
    float nota;

    printf("Digite uma nota: ");
    scanf("%f", &nota);

    classificarNotas(nota);
    return 0;
}