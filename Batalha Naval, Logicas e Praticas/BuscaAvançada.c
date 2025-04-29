#include <stdio.h>
#define LINHA 10
#define COLUNA 10

int main()
{

    int matriz[LINHA][COLUNA] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 86; // numero que eu quiser por para ser buscado
    int found = 0;  // representando se o elemento foi encontrado ou nao (false)
    int soma = 1;

    // preenchendo a matriz
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O elemento %d foi encontrado na matriz na linha %d e coluna %d.\n", target, i, j);
                found = 1; // repesentando que o elemento foi encontrado (true)
                break;
            }
        }
        if (found)
            break;
    }
    if (!found)
    {
        printf("O elemento %d nao foi encontrado na matriz.\n", target);
    }

    return 0;
}