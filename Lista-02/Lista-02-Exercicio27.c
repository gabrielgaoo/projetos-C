#include <stdio.h>
int main(){
 float peso,altura,massa;
  printf("INFORME SEU PESO\n");
  scanf("%f",&peso);
  printf("INFORME SUA ALTURA\n");
   scanf("%f",&altura);
    massa = peso/(altura*altura);
    printf("IMC=%.2f\n",massa);
  if(massa<20){
    printf("VOCE ESTA ABAIXO DO PESO IDEAL\n");
  }else if((massa>=20)&&(massa<25)){
    printf("PARABENS!VOCE ESTA EM SEU PESO NORMAL!\n");
  }else if((massa>=25)&&(massa<30)){
    printf("VOCE ESTA ACIMA DE SEU PESO(SOBREPESO)\n");
  }else if ((massa>=30)&&(massa<35)){
    printf("OBESIDADE MODERADA (GRAU I)\n");
  }else if((massa>=35)&&(massa<40)){
    printf("OBESIDADE SEVERA (GRAU II)\n");
  }else if(massa>=40){
    printf("OBESIDADE MORBIDA! (GRAUIII)\n");
  }











return 0;
}
