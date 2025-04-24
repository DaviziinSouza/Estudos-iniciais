#include <stdio.h>
#define LINHA 5
#define COLUNA 5

int main() {

    int matriz[LINHA][COLUNA];

    int soma = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            soma++;
            matriz[i][j] = soma;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

return 0;
}