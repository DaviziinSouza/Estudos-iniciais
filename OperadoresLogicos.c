#include <stdio.h>

int main (){

    /*se os dois lados são verdadeiros
    a resposta será verdadeira, caso contrario
    será falso*/

    int a = 10, b = 5;

    if (a > 0 && b > 0)
    {
        printf("Ambos são positivos.\n");
    } else {
        printf("Pelo menos um dos números é negativo.\n");
    }
    
//-------------------------------------------------------------//

/*se pelo menos um dos lados for verdadeiro
a resposta vai ser verdadeira, caso contrairo
será falso.*/

int a = 10, b = 5;

    if (a > 0 || b > 0)
    {
        printf("Ambos são positivos.\n");
    } else {
        printf("Pelo menos um dos números é negativo.\n");
    }
    
//-------------------------------------------------------------//

/*o operador ! inverte o valor lógico de uma expressão.
Se a expressão for verdadeira, ele retorna falso,
e se a expressão for falsa, ele retorna verdadeiro.*/

int a = 0;

    if (!a)
    {
        printf("A variavel A é negativa.\n");
    } else {
        printf("A variavel A é positiva.\n");
    }
    
//-------------------------------------------------------------//

//a > 0 => verdadeiro
//b < 0 => verdadeiro
//Verdadeiro && verdadeiro => verdadeiro
//Verdadeiro || c == 0
//Verdadeiro || Falso > Verdadeiro

        int a = 5;
        int b = -10;
        int c = 1;
      
        if (a > 0 && b < 0 || c == 0) {
          printf("A condição é verdadeira\n");
        } else {
          printf("A condição é falsa\n");
        }
      
      //-------------------------------------------------------------//

      //idade >= 18 => Verdadeira
      //idade <= 30 => verdadeira
      //Verdadeira  && veradeira
      //Verdadeira && altura 1.70
      //Verdadeira && Verdadeira => verdadeira

        int idade = 20;
        float altura = 1.75;
      
        if (idade >= 18 && idade <= 30 && altura > 1.70) {
          printf("Você está na faixa etária e tem a altura adequada\n");
        } else {
          printf("Você não atende aos critérios\n");
        }
      

    return 0;
}