#include <stdio.h>
#include <string.h>

// Função para exibir as regras do jogo
void mostrarRegras() {
    printf("||--|| Regras do Jogo ||--||\n");
    printf("As regras do jogo consistem em comparar os atributos das cartas para determinar a mais forte.\n");
    printf("O tema deste jogo é 'Países', onde você comparará os atributos das cidades.\n");
}

// Função para mostrar os dados de uma carta
void mostrarCarta(char nome[], int populacao, float area, float pib, float pontos, float densidade) {
    printf("Nome do País: %s\n", nome);
    printf("População: %d milhões de habitantes\n", populacao);
    printf("Área: %.0f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %.0f\n", pontos);
    printf("Densidade demográfica: %.2f\n\n", densidade);
}

// Função para comparar os valores
void compararCartas(float valor1, float valor2) {
    if (valor1 > valor2) {
        printf("Carta 1 venceu!\n");
    } else if (valor1 < valor2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("As cartas têm o mesmo valor!\n");
    }
}

int main() {
    float pontos_turisticos1 = 143, pontos_turisticos2 = 89;
    float area1 = 576483, area2 = 236743;
    float pib1 = 4874, pib2 = 7218;
    float densidade_populacional1, densidade_populacional2;
    int valor1, valor2;
    int opcao1, escolha1, escolha2;
    int populacao1 = 986, populacao2 = 874;
    char pais1[20] = "Brasil";
    char pais2[20] = "Japão";

    densidade_populacional1 = (float)populacao1 / area1;
    densidade_populacional2 = (float)populacao2 / area2;

    printf("||***|| Bem-vindo ao jogo de lógica de Super Trunfo! ||***||\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1:
            printf("### Início da comparação de cartas ###\n");

            printf("Carta 1:\n");
            mostrarCarta(pais1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1);

            printf("Carta 2:\n");
            mostrarCarta(pais2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2);

            printf("||--|| Escolha o atributo da primeira carta ||--||\n");
            printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n");
            scanf("%d", &escolha1);

            printf("||--|| Escolha o atributo da segunda carta ||--||\n");
            printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade demográfica\n");
            scanf("%d", &escolha2);

            switch (escolha1) {
                case 1: valor1 = populacao1; break;
                case 2: valor1 = area1; break;
                case 3: valor1 = pib1; break;
                case 4: valor1 = pontos_turisticos1; break;
                case 5: valor1 = densidade_populacional1; break;
            }

            switch (escolha2) {
                case 1: valor2 = populacao2; break;
                case 2: valor2 = area2; break;
                case 3: valor2 = pib2; break;
                case 4: valor2 = pontos_turisticos2; break;
                case 5: valor2 = densidade_populacional2; break;
            }

            compararCartas(valor1, valor2);
            break;

        case 2:
            mostrarRegras();
            break;

        case 3:
            printf("||--|| Saindo do jogo... Obrigado por jogar! ||--||\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
