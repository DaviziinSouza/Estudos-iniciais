#include <stdio.h>

int main() {
    
    //Declarando a matriz
    int matriz[3][3];

    //Inicializando a matriz usando estrutura de repetição for aninhada
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i + j; //atribuindo valores aos elementos da matriz
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}