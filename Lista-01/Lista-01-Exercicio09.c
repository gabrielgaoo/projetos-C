/*
Faça um programa em C que receba a medida de dois ângulos de um triângulo,
calcule e mostre a medida do terceiro ângulo. Sabe-se que a soma dos ângulos de um
triângulo é 180.
*/
#include <stdio.h>
#define triangulo 180
int main (){
 int anguloUm,anguloDois,A;
printf("DIGITE O PRIMEIRO ANGULO\n");
  scanf("%d",&anguloUm);
printf("DIGITE O SEGUNDO ANGULO\n");
  scanf("%d",&anguloDois);
   A= triangulo-(anguloUm+anguloDois);
 printf("O TERCEIRO ANGULO EH %d",A);
 
 return 0;
}
