#include <stdio.h>

int main (){
    
    //exemplo 1
    int temperatura;
    int resultado;

    printf("Informe a Temperatura:\n");
    scanf("%d", &temperatura);
    temperatura >= 30 ? printf("A temperatura esta elevada\n") : printf("A temperatura está OK\n");


    //exemplo 2

    int num1 = 20, num2 = 40;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);
    
    printf("O número maior é: %d\n", maior);
    return 0;
}