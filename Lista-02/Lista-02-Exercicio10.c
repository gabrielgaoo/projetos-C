#include <stdio.h>
#define percentUm 0.15
#define percentDois 0.10
#define percentTres 0.05

 int main(){

 int salario,ajuste;
  printf("INFORME SEU SALARIO \n");
  scanf("%d",&salario);
   if (salario<300){
    ajuste = (salario*percentUm)+salario;
    printf("O SALARIO REAJUSTADO EH %d",ajuste);
   } else if((salario>=300)&&(salario<600)){
     ajuste = (salario*percentDois)+salario;
     printf("O SALARIO REAJUSTADO EH %d",ajuste);
   } else if((salario>=600)&&(salario<900)){
     ajuste = (salario*percentTres)+salario;
     printf("O SALARIO REAJUSTADO EH %d",ajuste);
   } else if (salario>900){
     printf("O SALARIO REAJUSTADO EH %d",salario);
   }








 return 0;
 }
