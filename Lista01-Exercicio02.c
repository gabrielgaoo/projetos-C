/*
Faça um programa em C que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado;
*/
#include <stdio.h>
#define eng 0.15
#define ema 0.20
int main(){

 float peso,engordou,emagreceu,ps1,ps2;
 printf("DIGITE SEU PESO--->");
 scanf("%f",&peso);

   engordou = peso*eng;
   emagreceu = peso*ema;
    ps1= peso+engordou;
    ps2= peso-emagreceu;
   printf("\nVOCE ENGORDOU %.2fKG",ps1);
   printf("\nVOCE EMAGRECEU %.2fKG",ps2);
 return 0;
}
