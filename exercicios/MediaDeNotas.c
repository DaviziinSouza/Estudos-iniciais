#include <stdio.h>

int main (){

  int opcao, nota1, nota2, nota3;
  float media;

  //Declarando variaveis
  printf("|****| MEDIA DE NOTAS |***|\n\n");
  printf("||Menu de opções||\n");
  printf("1. Calcular a média.\n");
  printf("2. Status do aluno.\n");
  printf("3. Sair.\n");
  printf("Escolha uma das opções acima.\n");
  scanf("%d", &opcao);

  //aplicando o menu interativo para o úsuario
  switch (opcao){
  case 1: 
  if ( (nota1 < 0 || nota2 < 0 || nota3 < 0) && (nota1 > 10 || nota2 > 10 || nota3 > 10) ){
    printf("Opção inválida. Por favor insira uma opção válida.");
   }
    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("O resultado da média é: %.2f", media);
    break;

   case 2 :
   printf("Informe a media do aluno: ");
   scanf("%f", &media);

   if (media >= 7){
    printf("Situação: Aprovado!\n");    
   }else if (media >= 5){
    printf("Situação: Recuperação!\n");
   }else {
       printf("Situação: Reprovado!\n");
   }
break;

case 3:
   printf("***Finalizando seu programa.***");
   break;

   default:
   printf("Opção inválida. Por favor insira uma opção válida.");	
   break;
  }
    return 0;
    
}