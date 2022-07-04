#include <stdio.h>
#define impost 0.07
 int main (){
  int salario,resultado;
  printf("INFORME SEU SALARIO \n");
  scanf("%d",&salario);
  if(salario<=350){

    resultado = (salario-salario*impost)+100;
     printf("SEU SALARIO FINAL EH %d",resultado);

  } else if((salario>350)&&(salario<=600)){

    resultado = (salario-salario*impost)+75;
     printf("SEU SALARIO FINAL EH %d",resultado);

  } else if ((salario>600)&&(salario<=900)){

    resultado = (salario-salario*impost)+50;
     printf("SEU SALARIO FINAL EH %d",resultado);
  } else if(salario>900){

     resultado = (salario-salario*impost)+35;
      printf("SEU SALARIO FINAL EH %d",resultado);
  }








  return 0;
 }
