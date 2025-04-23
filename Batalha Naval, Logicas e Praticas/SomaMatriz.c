#include <stdio.h>

int main() {
    
    int matriz1[2][2] = { {1, 2}, {3, 4} };
    int matriz2[2][2] = { {5, 6}, {7, 8} };
    int MatrizSoma[2][2];

    //somando as duas matrizes
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            MatrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("MatrizSoma[%d][%d] = %d\n", i, j, MatrizSoma[i][j]);
        }
    }



    
    return 0;
    
}