#include <stdio.h>
/* Cardápio Interativo
Crie um programa que exiba um menu com 4 opções de lanches:

Hambúrguer, Cachorro-quente, Pizza, Sair

O usuário deve digitar a opção desejada e o programa deve mostrar uma mensagem correspondente. Se o usuário digitar 4, o programa deve exibir "Encerrando pedido...". Se digitar qualquer outro número, mostrar "Opção inválida!".*/
int main()
{
    char lanches;

    printf("Digite qual lanche deseja (1-Hamburguer, 2-Cachorro-quente, 3-Pizza, 4-Sair/): ");
    scanf("%c", &lanches);

    switch (lanches)
    {
    case '1':
        printf("Vamos preparar seu Hamburquer");
        break;
    case '2':
        printf("Vamos preparar seu Cachorro-quente");
        break;
    case '3':
        printf("Vamos preparar sua Pizza");
        break;
    case '4':
        printf("Encerrando pedido...");
        break;

    default:
        printf("Opcao invalida!");
    }

    return 0;
}
