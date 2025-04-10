#include <stdio.h>

int main() {

    for ( int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }
/* o INT I vai de 0 até 10, e o J vai de 10 até 0, mas
colocamos a regra que o o os respectivos numero irão
realzar as respectivas funções até chegar em determinado valor
enquanto i for menor que j, i vai ser incrementado e j vai ser decrementado
*/



    return 0;
}