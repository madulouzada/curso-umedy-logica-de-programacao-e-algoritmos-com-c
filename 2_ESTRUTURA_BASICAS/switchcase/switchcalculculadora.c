#include <stdio.h>

int main()
{
    char operador;
    float a, b;

    printf("Digite a operacao (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite os dois valores\n: ");
    scanf("%f %f", &a, &b); // aqui posso pegar dois valores, de uma fez só

    switch (operador)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f", a, operador, b, (a + b)); // aqui estou passando os dois numero , a operação e o resultado entre parenteses
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f", a, operador, b, (a - b)); // aqui estou passando os dois numero , a operação e o resultado entre parenteses
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f", a, operador, b, (a * b)); // aqui estou passando os dois numero , a operação e o resultado entre parenteses
        break;
    case '/':
        if (a != 0 && b != 0)
        {
            printf("%.2f %c %.2f = %.2f", a, operador, b, (a / b)); // aqui estou passando os dois numero , a operação e o resultado entre parenteses
        }
        else
        {
            printf("Nao e possivel fazer divisao por zero.");
        }
        break;

    default:
        printf("Operador invalido !");
    }

    return 0;
}