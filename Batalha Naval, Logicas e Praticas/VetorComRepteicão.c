#include <stdio.h>

int main()
{
    int vetor[5]; //Declarando o vetor com 5 elementos

    //Inicializando o vetor com loop for
    for (int i = 0; i < 5; i++) 
    {
        vetor[i] = i * 1; //Definindo o valor de cada elemento do vetor
    }

    //exibindo o vetor com loop for
    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }


    return 0;
}