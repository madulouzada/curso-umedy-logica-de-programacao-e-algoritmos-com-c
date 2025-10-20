#include <stdio.h>
/* Verificação de Nota e Frequência para Aprovação​
Você foi contratado para fazer um sistema simples de avaliação escolar. O programa deve apresentar o seguinte menu:
Verificar se o aluno foi aprovado
Sair
​Se o usuário escolher a opção 1, o programa deve solicitar a nota final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).
O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência for maior ou igual a 75%. Use if else para essa verificação dentro do case 1.
Se o usuário escolher a opção 2, o programa deve encerrar.
Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".*/

int main()
{

    int opcao;
    float nota, frequencia;

    printf("======================\n");
    printf("Menu:\n");
    printf("1 - Verificar se o aluno foi aprovado\n");
    printf("2 - Sair\n");
    printf("======================\n\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        printf("Digite a presenca do aluno: ");
        scanf("%f", &frequencia);

        if (nota >= 7 && frequencia >= 75)
        {
            printf("\nAprovado!\n");
        }
        else
        {
            printf("\nReprovado!\n");
        }
        break;

    case 2:
        printf("Encerrando programa... \n");
        break;

    default:
        printf("Opcao invalida !");
    }
    return 0;
}