#include <stdio.h>

int main (){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("SISTEMA DE MONITORAMENTO!\n\n");

    printf("Informe a Temperatura:\n");
    scanf("%f", &temperatura);
    
    printf("Informe a Umidade:\n");
    scanf("%f", &umidade);

    printf("Informe o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A TEMPERATURA ESTÁ ELEVADA!\n");
    }
    else{
        printf("A temperatura está OK\n");
    }

    if (umidade > 50){
        printf("A UMIDADE ESTÁ ELEVADA!\n");
    }
    else{
        printf("A umidade está de acordo.\n");
    }
    if (estoque < estoqueMinimo){
        printf("O estoque está abaixo do minimo.\n");
    }
    else{
        printf("O estoque está nos parametros.\n");
    }

    return 0;
}