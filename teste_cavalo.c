#include <stdio.h>

int main (){
    
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    
        int j = 0;
        while (j < 1 && i == 1) { // só no último passo
            printf("Esquerda\n");
            j++;
        }
    }
    


    return 0;
}