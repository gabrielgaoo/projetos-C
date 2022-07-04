/*
40. Faça uma função em C que realize a conversão para Radianos (rad) a partir de Graus (grad), onde
grad é passado como parâmetro e rad é retornado. Sabe-se que 180o (graus) está para 3,14 radianos.
Crie também um algoritmo para testar tal função.

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
