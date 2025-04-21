#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {10, 20},
        {30, 40}
    };

    printf("Elemento [0][0]: %d\n", matriz[0][0]); // 10
    printf("Elemento [0][1]: %d\n", matriz[0][1]); // 20
    printf("Elemento [1][0]: %d\n", matriz[1][0]); // 30
    printf("Elemento [1][1]: %d\n", matriz[1][1]); // 40

    return 0;
}
