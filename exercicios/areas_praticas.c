#include <stdio.h>

int main (){

//Programa para calculo de notas
float nota1, nota2, nota3;
float media;

printf("|****| MEDIA DE NOTAS |***|\n\n");

printf("Digite sua primeira nota: ");
scanf("%f", &nota1);

printf("Digite sua segunda nota: ");
scanf("%f", &nota2);

printf("Digite sua terceira nota: ");
scanf("%f", &nota3);

media = (float) (nota1 + nota2 + nota3) / 3;

printf("O resultado da média é: %.2f", media);

return 0;
}