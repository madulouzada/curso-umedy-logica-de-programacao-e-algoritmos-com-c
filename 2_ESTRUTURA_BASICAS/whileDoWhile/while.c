#include <stdio.h>

int main()
{

    int senha;

    do
    {
        print("Digite a senha correta (1234): ");
        scanf("%d", &senha);
    } while (senha != 1234);

    printf("Acesso liberado! \n ");

    return 0;
}