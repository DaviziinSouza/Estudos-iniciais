#include <stdio.h>

    void AdicionarComida (char comes[])
    {
        printf("Adicione o alimento que iremos comer: \n");
        fgets(comes, 20, stdin);
    }

    void AdicionarBebida (char bebes[])
    {
        printf("Adicione as bebidas para festa: \n");
        fgets(bebes, 20, stdin);
    }

    int main() {

        char comes[20], bebes[20];

        printf("*** LISTA DE COMIDAS ANIVERSÁRIO ***\n");

        AdicionarComida(comes);
        AdicionarBebida(bebes);

        printf("Comidas: %s", comes);
        printf("Bebidas: %s", bebes);
        
    return  0;
}