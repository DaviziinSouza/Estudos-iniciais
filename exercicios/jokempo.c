#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
int escolhajogador, escolhacomputador;
srand (time(0));

printf("|||Jogo de Jokempo|||\n");
printf("Escolha uma opção:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
scanf("%d", &escolhajogador);

escolhacomputador = rand() % 3 + 1;

switch (escolhacomputador){
    case 1: 
        printf("Computador escolheu Pedra - ");
        break;
    case 2: 
        printf("Computador escolheu Papel - ");
        break;
    case 3: 
        printf("Computador escolheu Tesoura - ");
        break;
    
}

if (escolhajogador == escolhacomputador){
    printf("Empate!\n");
}
else if (escolhajogador == 2 && escolhacomputador == 1 || escolhajogador == 3 && escolhacomputador == 2 || escolhajogador == 1 && escolhacomputador == 3){
    printf("Vocé ganhou!\n");
}
else{
    printf("Vocé perdeu!\n");
}



return 0;
}