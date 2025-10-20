#include <stdio.h>

/*
Controle de Revisão de Carros
Uma concessionária deseja criar um sistema para registrar os carros que entram para revisão e verificar quais precisam de reparos urgentes. O sistema deve:

1. Pedir ao usuário quantos carros serão registrados.
2. Para cada carro, solicitar: - Modelo - Ano de fabricação - Se está funcionando normalmente (1 ou 0).
3. Exibir uma mensagem indicando se o carro está em boas condições ou se precisa de reparos urgentes (se for muito antigo ou estiver com problemas).
- Se o ano for menor que 2005 e o carro não estiver funcionando normalmente, então, retorne "O carro X precisa de REPAROS URGENTES!".
- Se o ano for menor que 2005 e o carro estiver funcionando normalmente, então, retorne "O carro X é antigo, recomenda-se uma revisão!".
- Se o ano for igual ou maior que 2005 e não estiver funcionando normalmente, então, retorne "O carro X precisa de manutenção!".
- Se o ano for igual ou maior que 2005 e estiver funcionando normalmente, então, retorne "O carro X está em boas condições!".

*/

int main()
{

    int quantidadeCarros;

    printf("Digite a quantidde de carros a serem registrados: ");
    scanf("%d", &quantidadeCarros);

    for (int i = 0; i < quantidadeCarros; i++)
    {
        char modelo[50];
        int ano;
        int carro_funcionando;

        printf("\nCarro %d: \n", i + 1);
        printf("Modelo do carro: ");
        scanf("%s", &modelo);

        printf("Ano de fabricacao: ");
        scanf("%s", &ano);

        printf("O caro esta funcionando noemalmente? (1 ou 0): ");
        scanf("%s", &carro_funcionando);

        // verificacao das condições do carro

        if (ano < 2005 && carro_funcionando == 0)
        {
            printf("O carro %s precisa de REPAROS URGENTES! \n", modelo);
        }
        else if (ano < 2005)
        {
            printf("O carro %s e antigo, recomenda-se uma revisão! \n", modelo);
        }
        else if (carro_funcionando == 0)
        {
            printf("O carro %s precisa de manutenção! \n", modelo);
        }
        else
        {
            printf("O carro %s está em boas condições! \n", modelo);
        }
    }

    return 0;
}
