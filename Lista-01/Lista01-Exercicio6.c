#include <stdio.h>
#define porcentagem 0.15
int main(){

 float peso,engordou,resultado;
 printf("DIGITE SEU PESO--->");
 scanf("%f",&peso);
   engordou = peso*porcentagem;
   resultado = engordou + peso;
   printf("\nVOCE ENGORDOU %2.fKG",resultado);





  return 0;
}

