#include <stdio.h>

int main() {

char carta1 [20], carta2 [20];
int opcao, subopcao, poder1, poder2, velocidade1, velocidade2;

printf("|||Informe as informações da prmeira carta|||\n");
printf("Digite o nome da primeira carta: ");
fgets(carta1, 20, stdin);

printf("Digite o poder da primeira carta: ");
scanf("%d", &poder1);
getchar();

printf("Digite a velocidade da primeira carta: ");
scanf("%d", &velocidade1);
getchar();

printf("|||Informe as informações da segunda carta|||\n");
printf("Digite o nome da segunda carta: ");
fgets(carta2, 20, stdin);

printf("Digite o poder da segunda carta: ");
scanf("%d", &poder2);
getchar();

printf("Digite a velocidade da segunda carta: ");
scanf("%d", &velocidade2);
getchar();


do {
    printf("|||Menu de opções|||\n");
    printf("1. Comparar as cartas\n");
    printf("2. Regras do jogo\n");
    printf("3. Informações das cartas\n");
    printf("4. Sair do jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Escolha o que deseja comparar:\n");
        printf("1. Poder\n");
        printf("2. Velocidade\n");
        scanf("%d", &subopcao);

        switch (subopcao) {
            case 1:
            if (poder1 > poder2) {
                printf("Poder carta 1: %d, poder carta 2: %d\n", poder1, poder2);
                printf("Carta 1 vence com o valor de %d\n", poder1);
            } else if (poder1 < poder2) {
                printf("Poder carta 1: %d, poder carta 2: %d\n", poder1, poder2);
                printf("Carta 2 vence com o valor de %d\n", poder2);
            } else {
                printf("Poder carta 1: %d, poder carta 2: %d\n", poder1, poder2);
                printf("Houve um empate, nos valores de %d , %d\n", poder1, poder2);
            }
            break;
            case 2:
            if (velocidade1 > velocidade2) {
                printf("Velocidade carta 1: %d, velocidade carta 2: %d\n", velocidade1, velocidade2);
                printf("Carta 1 vence com o valor de %d\n", velocidade1);
                }else if (velocidade1 < velocidade2) {
                printf("Velocidade carta 1: %d, velocidade carta 2: %d\n", velocidade1, velocidade2);
                printf("Carta 2 vence com o valor de %d\n", velocidade2);
                } else {
                printf("Velocidade carta 1: %d, velocidade carta 2: %d\n", velocidade1, velocidade2);
                printf("Houve um empate, nos valores de %d , %d\n", velocidade1, velocidade2);
                }
            break;
            default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }
        break;
        case 2:
        printf("||REGRAS DO JOGO||\n");
        printf("O jogo consiste em comparar os atributos de duas cartas, a carta com maior valor vence.\n");
        break;
        case 3:
        printf("||INFORMACOES DAS CARTAS||\n");
        printf("Os atributos da primeira carta são:\n");
        printf("Nome: %s\n", carta1);
        printf("Poder: %d\n", poder1);
        printf("Velocidade: %d\n\n", velocidade1);
        printf("Os atributos da segunda carta são:\n");
        printf("Nome: %s\n", carta2);
        printf("Poder: %d\n", poder2);
        printf("Velocidade: %d\n\n", velocidade2);
        break;
        case 4:
        printf("Saindo do jogo...\n");
        break;
        default:
        printf("Opção inválida, tente novamente!\n");
        break;
    }
} while (opcao != 4);



       



    return 0;
}
