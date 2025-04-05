#include <stdio.h>

int main (){

    int i = 1;

    while (i <=10) 
    {
    if (i % 2 == 0) //apenas impressão de numeros pares!
    {
        printf("O numero %d é par\n", i);
    }
    i++;
    }


    return 0;
}