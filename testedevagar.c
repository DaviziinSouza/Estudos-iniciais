#include <stdio.h>
#include <unistd.h> // para usleep()

int main() {
    char nome1[] = "Carta 1";
    int forca1 = 80, velocidade1 = 90;

    char nome2[] = "Carta 2";
    int forca2 = 85, velocidade2 = 88;

    int opcao;

    do {
        // Impressão do menu com efeito de digitação
        const char *menu = "\n=== Menu ===\n1. Comparar Cartas\n2. Sair\nEscolha uma opcao: ";
        for (int i = 0; menu[i] != '\0'; i++) {
            putchar(menu[i]);
            fflush(stdout);
            usleep(30000); // 0.03 segundos entre caracteres
        }

        scanf("%d", &opcao);

        if (opcao == 1) {
            const char *msg = "\nComparando cartas...\n\n";
            for (int i = 0; msg[i] != '\0'; i++) {
                putchar(msg[i]);
                fflush(stdout);
                usleep(40000);
            }

            // Comparação de Força
            if (forca1 > forca2) {
                printf("%s venceu na Forca!\n", nome1);
            } else if (forca1 < forca2) {
                printf("%s venceu na Forca!\n", nome2);
            } else {
                printf("Empate na Forca!\n");
            }

            // Comparação de Velocidade
            if (velocidade1 > velocidade2) {
                printf("%s venceu na Velocidade!\n", nome1);
            } else if (velocidade1 < velocidade2) {
                printf("%s venceu na Velocidade!\n", nome2);
            } else {
                printf("Empate na Velocidade!\n");
            }

        } else if (opcao != 2) {
            const char *erro = "Opcao invalida! Tente novamente.\n";
            for (int i = 0; erro[i] != '\0'; i++) {
                putchar(erro[i]);
                fflush(stdout);
                usleep(30000);
            }
        }

    } while (opcao != 2);

    const char *fim = "Saindo...\n";
    for (int i = 0; fim[i] != '\0'; i++) {
        putchar(fim[i]);
        fflush(stdout);
        usleep(40000);
    }

    return 0;
}
