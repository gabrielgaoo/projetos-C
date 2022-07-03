/*
Faça um programa em C que receba os lados de um quadrado, calcule e mostre a área
desse quadrado. Sabendo-se que: A = lado * lado
*/
#include <stdio.h>
int main (){

 int lado,A;
 printf("DIGITE o LADO DO QUADRADO");
 scanf("%d",&lado);
  A = lado*lado;

 printf("A AREA DO QUADRADO EH %d",A);
 
return 0;
}
