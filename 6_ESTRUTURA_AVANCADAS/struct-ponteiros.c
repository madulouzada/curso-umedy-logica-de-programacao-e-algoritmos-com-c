#include <stdio.h>

struct Pessoa // pessoa é um escopo -> capsula
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{

    struct Pessoa p1;
    struct Pessoa *ponteiro = &p1; // criação do ponteiro e fazendo o endereço de onde vai buscar

    printf("Digite o nome: ");
    scanf("%s", ponteiro->nome); // como ir buscar o endereço pelo ponteiro (ponteiro->)

    printf("Digite a idade: ");
    scanf("%d", &ponteiro->idade);

    printf("Digite a altura: ");
    scanf("%f", &ponteiro->altura);

    printf("Nome: %s\n", ponteiro->nome);
    printf("Idade: %d\n", ponteiro->idade);
    printf("Altura: %.2f\n", ponteiro->altura);

    return 0;
}