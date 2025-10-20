#include <stdio.h>

int main()
{
    int opcao = 1;

    // estrutura de controle
    switch (opcao)
    {       // aqui ele percorre,ate chegar o numero que vou declarado
    case 1: // caso o valor opção for 1, ele entra nessa condição
        printf("Fase numero 1 ");
        break; // usado para finalizar e não ficar percorrendo eternamente, caso o numero ja for encontrado.
    case 2:    // caso o valor opção for 2, ele entra nessa condição
        printf("Fase numero 2 ");
        break; // usado para finalizar e não ficar percorrendo eternamente, caso o numero ja for encontrado.
    case 3:    // caso o valor opção for 3, ele entra nessa condição
        printf("Fase numero 3 ");
        break; // usado para finalizar e não ficar percorrendo eternamente, caso o numero ja for encontrado.
    case 4:    // caso o valor opção for 4, ele entra nessa condição
        printf("Fase numero 4 ");
        break; // usado para finalizar e não ficar percorrendo eternamente, caso o numero ja for encontrado.
    default:   // ele netra aqui, quando nenhuma das opção de cima, forem verdadeiras
        printf("Opção invalida");
    }
}