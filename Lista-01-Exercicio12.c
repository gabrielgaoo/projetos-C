/*
Sabe-se que para iluminar de maneira correta os cômodos de uma casa, para cada
metro quadrado deve-se usar 18 W de potência. Faça um programa em C que receba as duas
dimensões de um cômodo (em metros), calcule e mostre a sua área (em metros quadrados) e a potência
de iluminação que deverá ser utilizada.
*/
#include <stdio.h>
#define potencia 18
int main (){
   float dimencaoUm,dimencaoDois,A,resultado;
   printf("DIGITE A PRIMEIRA DIMENCAO");
   scanf("%f",&dimencaoUm);
   printf("DIGITE A SEGUNDA DIMENCAO");
   scanf("%f",&dimencaoDois);
  A = dimencaoUm*dimencaoDois;
  printf("A AREA DO COMODO EH %2.f\n",A);
   A *= potencia;
  printf("A PONTECIA DE ILUMINCAO DESTE DEVE SER %2.fW\n",A);
 return 0;
}
