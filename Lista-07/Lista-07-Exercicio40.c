/*
40. Fa�a uma fun��o em C que realize a convers�o para Radianos (rad) a partir de Graus (grad), onde
grad � passado como par�metro e rad � retornado. Sabe-se que 180o (graus) est� para 3,14 radianos.
Crie tamb�m um algoritmo para testar tal fun��o.

*/
#include <stdio.h>
#define Pi 3.14
  float  converR(float *GRAD);
int main(){

   float grad;
   float rad;
   printf("INFORME QUANTOS GRAUS PARA CONVERSAO EM RADIANOS\n");
   scanf("%f",&grad);
   rad = converR(&grad);
   printf("%f em radianos eh %f\n",grad,rad);







return 0;
}
float  converR(float *GRAD){
    float rad;
    rad =  *GRAD*Pi/180;
    return rad;
}
