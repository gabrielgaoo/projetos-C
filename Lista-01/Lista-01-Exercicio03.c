/*
Faça um programa em C que calcule e mostre a tabuada de um número digitado
pelo usuário.
*/
#include <stdio.h>
  int main (){

  int numero,resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7,resultado8,resultado9,resultado10;
  printf("DIGITE UM NUMERO");
     scanf("%d",&numero);
    resultado1=numero*1;
    resultado2=numero*2;
    resultado3=numero*3;
    resultado4=numero*4;
    resultado5=numero*5;
    resultado6=numero*6;
    resultado7=numero*7;
    resultado8=numero*8;
    resultado9=numero*9;
    resultado10=numero*10;
  printf("%dX1=%d\n",numero,resultado1);
  printf("%dX2=%d\n",numero,resultado2);
  printf("%dX3=%d\n",numero,resultado3);
  printf("%dX4=%d\n",numero,resultado4);
  printf("%dX5=%d\n",numero,resultado5);
  printf("%dX6=%d\n",numero,resultado6);
  printf("%dX7=%d\n",numero,resultado7);
  printf("%dX8=%d\n",numero,resultado8);
  printf("%dX9=%d\n",numero,resultado9);
  printf("%dX10=%d\n",numero,resultado10);

 return 0;
}
