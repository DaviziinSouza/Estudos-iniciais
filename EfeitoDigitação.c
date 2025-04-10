#include <stdio.h>

int main() {
    printf("\033[1;31mTexto vermelho\033[0m\n");  // 1;31 é vermelho
    printf("\033[1;32mTexto verde\033[0m\n");     // 1;32 é verde
    printf("\033[1;34mTexto azul\033[0m\n");      // 1;34 é azul
    printf("\033[1;33mTexto amarelo\033[0m\n");   // 1;33 é amarelo

    return 0;
}
