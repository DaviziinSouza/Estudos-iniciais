#include <stdio.h>

int main (){

int opcao;
float saldo = 1000.00;

printf("Escolha uma opção:\n");
printf("1. Verificar Saldo.\n");
printf("2. Fazer Deposito.\n");
printf("3. Fazer Saque.\n");
scanf("%d", &opcao);

switch (opcao){

case 1:
    printf("O seu saldo é R$%f.\n", saldo);
    break;

case 2:
    printf("Informe o banco que deseja realizar o deposito.\n");
    printf("Informe a agencia que você deseja depositar.\n");
    printf("Informe a conta que você deseja depositar.\n");
    break;

case 3:
    printf("Informe o valor para saque.\n");
    break;

default:
    printf("Opção inválida.\n");
    break;
}


    
    return 0;
}