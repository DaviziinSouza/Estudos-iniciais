#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){

    int opcao, numerosecreto, palpite;

    printf("Menu de opções:\n");
    printf("1. Iniciar o jogo.\n");
    printf("2. Ver regras do jogo.\n");
    printf("3. Sair do jogo.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

switch (opcao)
{
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numerosecreto == palpite){
            printf("Parabéns, vocé acertou o número secreto!\n");
        } else {
            printf("Vocé errou, o número secreto era %d.\n", numerosecreto);
        }
        break;

    case 2:
        printf("####Você selecionou as regras do jogo.####\n");
        printf("Você deverá inserir um número de 1 a 10 para poder acertar o número secreto.\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;
        
    default:
        printf("Opção inválida, Tente novamente.\n");
        break;
}



    return 0;
}