#include <stdio.h>
// chcp 65001 - ativa o UTF-8
#include <locale.h> // importar esta biblioteca
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8); // força UTF-8 no terminal
    setlocale(LC_ALL, "");       // habilitar acentos no windons
    printf("Coração!\n");
    return 0;
}