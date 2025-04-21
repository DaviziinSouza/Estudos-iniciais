#include <stdio.h>

int main() {
    int matriz[2][2] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    printf("Elemento [0][0]: %d\n", matriz[0][0]); // 10
    printf("Elemento [0][1]: %d\n", matriz[0][1]); // 20
    printf("Elemento [1][0]: %d\n", matriz[1][0]); // 30
    printf("Elemento [1][1]: %d\n", matriz[1][1]); // 40
    printf("Elemento [2][0]: %d\n", matriz[2][0]); // 50
    printf("Elemento [2][1]: %d\n", matriz[2][1]); // 60

    return 0;
}
