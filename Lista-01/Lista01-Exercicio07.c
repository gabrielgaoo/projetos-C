/*
Faça um programa em C que receba o peso de uma pessoa em quilos, calcule e
mostre esse peso em gramas.
*/
#include <stdio.h>
int main (){
  int basemaior,basemenor,altura,A;
  printf("DIGITE A BASE MAIOR DO TRAPEZIO\n");
     scanf("%d",&basemaior);
  printf("DIGITE A BASE MENOR DO TRAPEZIO\n");
     scanf("%d",&basemenor);
  printf("DIGITE A ALTURA DO TRAPEZIO\n");
    scanf("%d",&altura);
       A = ((basemaior + basemenor)*altura)/2;
  printf("A AREA DO TRAPEZIO EH-->%d",A);

 return 0;
}
