#include <stdio.h>

struct Pessoa // pessoa é um escopo -> capsula
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{

    struct Pessoa p1; // p1 é a variavel da estrutura Pessoa que foi criada

    // para utilizadar, digita p1 e ponto e o proprio teclado, vai dar as opções que tem dentro dostructPessoa
    printf("Digite o nome: ");
    scanf("%s", &p1.nome);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    printf("Digite a altura: ");
    scanf("%f", &p1.altura);

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}