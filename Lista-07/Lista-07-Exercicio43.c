/*
43. Fa�a uma fun��o em C que realize a convers�o de p�s (feet) para metros (m), sendo que feet �
passado como par�metro e m � retornado. Sabe-se que 1 metro est� para 3,281 p�s. Crie tamb�m um
programa para testar tal fun��o.
*/
#include <stdio.h>
#define pes 3.281
   float  converP(float *FEET);
  int main(){
    float feet;

    printf("INFORME QUANTOS PES PARA CONVERSAO\n");
    scanf("%f",&feet);
     converP(&feet);
    printf("%f EM PES PARA METROS EH %fM\n",feet,converP(&feet));



  return 0;
  }
float  converP(float *FEET){
      float m;
      m = *FEET /pes;
      return m;


}
