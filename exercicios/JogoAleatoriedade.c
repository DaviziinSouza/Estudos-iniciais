#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int NumeroJogador, NumeroComputador, resultado;
char TipoComparacao;

srand (time(0));
NumeroComputador = rand() % 100 + 1;

printf("|-|Bem-vindo ao jogo de adivinhação!|-|\n");
printf("Você escolhe um número e se ele vai ser maior menor ou igual.\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha sua comparação: ");
scanf("%c", &TipoComparacao);

printf("Escolha um número de 1 a 100: ");
scanf("%d", &NumeroJogador);

switch (TipoComparacao){
    case 'M':
    case 'm':
    printf("|||Você escolheu a opção maior|||\n");
       resultado = NumeroJogador > NumeroComputador ? 1 : 0;
       break;

       case 'N':
       case 'n':
       printf("|||Vocé escolheu a opção menor|||\n");
       resultado = NumeroJogador < NumeroComputador ? 1 : 0;
       break;

       case 'I':
       case 'i':
       printf("|||Vocé escolheu a opção igual|||\n");
       resultado = NumeroJogador == NumeroComputador ? 1 : 0;
       break;

       default:
       printf(" Vocé escolheu uma opção inválida.\n");
       break;
}

    printf("O número do jogador é: %d, e o número do computador é: %d.\n", NumeroJogador, NumeroComputador);
    if (resultado == 1){
        printf("Parabéns, vocé ganhou!\n");
    } else {
        printf("Infelizmente, vocé perdeu!\n");
    }




    return 0;
}