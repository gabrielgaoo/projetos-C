/*
43. Faça uma função em C que realize a conversão de pés (feet) para metros (m), sendo que feet é
passado como parâmetro e m é retornado. Sabe-se que 1 metro está para 3,281 pés. Crie também um
programa para testar tal função.
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
