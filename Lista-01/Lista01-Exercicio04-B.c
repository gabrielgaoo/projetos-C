/*
6) Faça um programa em C que receba o peso de uma pessoa, calcule e mostre:
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado;
*/
#include <stdio.h>
#define porcentagem 0.20
int main(){
 float peso,emagreceu,resultado;

  printf("DIGITE SEU PESO--->");
    scanf("%f",&peso);
    emagreceu = peso*porcentagem;
    resultado= peso-emagreceu;
  printf("VOCE EMAGRECEU %2.fKG",resultado);

return 0;
}
