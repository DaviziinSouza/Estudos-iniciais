#include <stdio.h>

void recursivo (int num)
{
    if (num > 0)
    {
        printf("%d\n", num);

        recursivo(num - 1);
    }
}

int main() {

    int quantidade = 10;

    printf("Contagem recursiva:\n");    
    recursivo(quantidade);

    return 0;
}