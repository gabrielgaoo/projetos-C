#include <stdio.h>
#define percentUm 0.50
#define percentDois 0.40
#define percentTres 0.30
#define percentQuatro 0.20
#define percentCinco 0.10
#define percentSeis 0.05
 int main (){

 int salario,resultado;
  printf("INFORME SEU SALARIO\n");
  scanf("%d",&salario);
  if (salario<=300){
    resultado = (salario*percentUm)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);

  }else if((salario>300)&&(salario<=500)){
     resultado = (salario*percentDois)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);
  }else if((salario>500)&&(salario<=700)){
     resultado = (salario*percentTres)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);
  }else if ((salario>700)&&(salario<+800)){
     resultado = (salario*percentQuatro)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);
  }else if((salario>800)&&(salario<=1000)){
    resultado = (salario*percentCinco)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);
  } else if (salario>1000){
    resultado = (salario*percentSeis)+salario;
    printf("SEU SALARIO ATUALIZADO EH %d",resultado);
  }









 }

