#include <stdio.h>

int main()
{ // iteração, esta iterando,executrando varias vezes
    for (int i = 0; i <= 10; i++)
    {
        printf("\n=================");
        printf("\nTabuada do %d\n", i); // aqui ele inicializa qual tabuada vai executar e netra dentro do for de j

        for (int j = 0; j <= 10; j++) // ele vai incrementar o j ate 10
        {
            printf("%d x %d = %d\n", i, j, i * j); // (i x j = i*j), vai utilizar o valor de i que foi inicializado, e vai incrementando o j e multiplicando ate j chegar em valor 10, depois finaliza este loop e retorna pro loop de i e continua fazendo a mesma coisa, ate que o loop de i chegue a 10
        }
    }

    return 0;
}