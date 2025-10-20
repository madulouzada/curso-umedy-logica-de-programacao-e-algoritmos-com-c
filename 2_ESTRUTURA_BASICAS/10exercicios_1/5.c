#include <stdio.h>
#include <math.h> //biblioteca de matematica

// Diferença de Salários entre Jogadores
// Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.
int main()
{

    float salario1, salario2, diferenca;

    printf("Digite o salario do primeiro jogador: ");
    scanf("%f", &salario1);

    printf("Digite o salario do segundo jogador: ");
    scanf("%f", &salario2);

    /* diferenca = salario1 - salario2; -- dessa forma funciona mas caso o valor do segundo salario for maior, vai retorna em negativo (ELE FAZ MAIS OU MENOS)  */
    diferenca = fabs(salario1 - salario2); /*AQUI PEGA O VALOR ABSOLUTO, PUXANDO METODO METODO fabs*/

    printf("Diferenca de salario: %.2f", diferenca);

    return 0;
}
