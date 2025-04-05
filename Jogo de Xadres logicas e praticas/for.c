#include <stdio.h>
int main() {
    
    int numero, i;

    printf("Informe o numero para ser calculado na tabuada: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, i * numero); 
    }    
    return 0;
}