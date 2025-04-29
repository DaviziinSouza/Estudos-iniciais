#include <stdio.h>

int main() {

    int matriz[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int target = 5; //numero que eu quiser por para ser buscado 
    int found = 0;//representando se o elemento foi encontrado ou nao (false)
    //busca condicional do elemento alvo
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O elemento %d foi encontrado na matriz na linha %d e coluna %d.\n", target, i, j);
                found = 1; //repesentando que o elemento foi encontrado (true)
                break;
            }
        }
        if (found) break;
    }
    if(!found)
    {
        printf("O elemento %d nao foi encontrado na matriz.\n", target);
    }

    return 0;
}