#include <stdio.h>
#define multa 0.02
 int main(){
  float salario,contaUm,contaDois,A,B,C,resultado;
  printf("DIGITE SEU SALARIO");
  scanf("%f",&salario);
  printf("DIGITE O VALOR DA SUA PRIMEIRA CONTA");
  scanf("%f",&contaUm);
  printf("DIGITE O VALOR DA SUA SEGUNDA  CONTA");
  scanf("%f",&contaDois);
   A = (contaUm*multa)+contaUm;
   B = (contaDois*multa)+contaDois;
   C = salario-(A+B);
  printf("RESTARA A JOAO %2.fR$",C);








  return 0;
 }
