#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    // scanf, copiando um codigo formatado,
    //"%d" o tipo de dados que ele vai receber,
    //&numero, o valor será armazenado nessa variavel, por conta do &, que é uma ancora e armazena na memoria

    printf("O numero foi o : %d", numero);

    return 0;
}