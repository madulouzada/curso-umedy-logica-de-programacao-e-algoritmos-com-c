#include <stdio.h>

int main()
{
    int numero = 10;
    float numeroQuebrado = 50.49;
    char letra = 'A';
    // char nome = "Maria";   -- isso se torna ERRADO, pois as aspas, simpoliza uma STRING e o CHAR espera apenas 1 caracter
    char nome[6] = "Maria";
    // Como estou usando string, eu passo o tamanho da string dentro de conhete
    // (LEMBRA-SE: sempre tem que passar um valor a mais, pois na linguagem C, sempre terminar com o barra zero)

    printf("Numero: %d \n", numero);              // \n, serve para pular uma linha
    printf("Flutuante: %.2f \n", numeroQuebrado); // .2, serve para deixar duas casas decimaias depois do ponto
    printf("Letra: %c \n", letra);
    printf("Nome: %s \n", nome); // Como esta recebendo uma string ponho %s

    return 0;
}
