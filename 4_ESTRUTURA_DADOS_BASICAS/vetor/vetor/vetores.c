#include <stdio.h>
// LEMBRE-SE,  O PRIMEIRO INDICES É O 0 E O ULTIMO É N-1
int main()
{
    int notas[5]; // Vetor para armazenar 5 notas

    //-> INT: tipo dos valores (números inteiros);
    //-> NOTAS: nome do vetor;
    //-> [5]: número total de elementos que cabem no vetor;
}
//=========================================================//

int main()
{
    int notas[5] = {10, 30, 5, 60, 55}; // declaro o tamanho e passei os valores macetados na mão

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", notas[i]); // [i], de indice
    }

    return 0;
}
