/*
Faça um programa em C que receba o peso de uma pessoa em quilos, calcule e
mostre esse peso em gramas.
*/
#include <stdio.h>
#define gramas 1000
 int main(){
float peso,resultado;
 printf("DIGITE SEU PESO-->");
  scanf("%f",&peso);
  resultado =peso*gramas;
 printf("\nO SEU PESO EM GRAMAS EH-->%5.f",resultado);

 return 0;
}
