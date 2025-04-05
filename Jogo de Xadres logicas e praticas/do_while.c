#include <stdio.h>

int main(){

int numero;

do {

    printf("Digite um número par para finalizar: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O número %d é par\n", numero);
    }else{
        printf("O número %d é impar\n", numero);
    }

}while (numero % 2 != 0);

printf("O numero informado é par, finalizando programa\n");

    return 0;
}