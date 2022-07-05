/*
Faça um programa em C que receba o raio, calcule e mostre:
a) o comprimento da esfera, sabe-se que C = 2πR;
b) a área dessa esfera, sabe-se que A = πR²
c) o volume dessa esfera, sabe-se que V = 4πR³/3
*/
#include <stdio.h>
#define PI 3.14
int main(){
  float raio,resultado,A,C,V;
  printf("DIGITE O RAIO DESTA ESFERA\n");
     scanf("%f",&raio);
      C = 2*PI*raio;
  printf("O CUMPRIMENTO DESTA ESFERA EH %2.f\n",C);
      A = PI*raio*raio;
  printf("A AREA DESTA ESFERA EH %2.f\n",A);
      V =(4*PI*raio*raio*raio)/3;'	
   printf("O VOLUME DESTA ESFERA EH %2.f",V);

 return 0;
}

