#include <stdio.h>
 int main(){
  int sexo;
  float peso,h;

    printf("INFORME SUA ALTURA\n");
    scanf("%f",&h);
    printf("INFORME SEU SEXO DIGITE (1)-PARA MASCULINO, (2)-PARA FEMININO\n");
    scanf("%d",&sexo);
    switch(sexo){
     case 1:
         peso = (72.7*h )-52;
         printf("O SEU PESO IDEIAL EH %.2fKG\n",peso);
      break;
     case 2:
        peso = (62.1*h)-44.7;
        printf("O SEU PESO IDEIAL EH %.2fKG\n",peso);
        break;
     default:
        printf("A OPCAO DIGITADA EH INVALIDA\n");

}








 return 0;
 }
