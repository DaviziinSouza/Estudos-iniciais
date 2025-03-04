#include <stdio.h>


/*Esse é um exemplo de if e else
agora pra poder acrescentar mais 
basta acrescentar els if na linha de codigos*/
int main() {

    char carta1[20], carta2[20], carta3[20], carta4[20];

    int poder1, poder2, poder3, poder4;

    printf("Digite o nome da primeira carta: ");
    fgets(carta1, 20, stdin);

    printf("Digite o poder da primeira carta: ");
    scanf("%d", &poder1);
    getchar(); 

    printf("Digite o segundo valor da primeira carta: ");
    scanf("%d", &poder2);
    getchar();
    
    printf("Digite o nome da segunda carta: ");
    fgets(carta2, 20, stdin);

    printf("Digite o poder da segunda carta: ");
    scanf("%d", &poder3);
    getchar(); 

    printf("Digite o segundo poder da segunda carta: ");
    scanf("%d", &poder4);
    getchar();


    if (poder1 > poder3) {
        printf("Carta 1 '%s' vence\n");
    } else {
        printf("Carta 2 vence:\n");
    } if (poder2 > poder4) {
        printf("Carta 1 vence:\n");
    } else {
        printf("Carta 2 vence:\n");
    }
    
    return 0;
}