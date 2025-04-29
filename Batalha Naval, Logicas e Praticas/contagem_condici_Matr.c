#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, addCount = 0;

    for (int i = 0; i < 3; i++) //Loop externo para as linhas
    {
        for (int j = 0; j < 3; j++)// loop interno para as colunas
        {
            if (matriz[i][j] % 2 == 0)
            {
                evenCount++;// Incrementa o contador de pares
            }
            else
            {
                addCount++;//Incrementa o contador de impares
            }
        }
    }
    //Impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos impares: %d\n", addCount);

    return 0;
}