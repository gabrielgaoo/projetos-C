#include <stdio.h>
#define percentUm 0.30
#define percentDois 0.25
#define percentTres 0.20
#define percentQuatro 0.10
 int main(){

int saldo,ajuste;
 printf("INFORME SEU SALDO MEDIO \n ");
 scanf("%d",&saldo);
 if(saldo>400){
        ajuste = (saldo*percentUm)+saldo;
    printf("SEU SALDO AJUSTADO EH %d\n",ajuste);
} else if ((saldo<=400)&&(saldo>300)){
    ajuste = (saldo*percentDois)+saldo;
    printf("SEU SALARIO EH %d\n",ajuste);
} else if((saldo<=300)&&(saldo>200)){
    ajuste = (saldo*percentTres)+saldo;
     printf("SEU SALARIO EH %d\n",ajuste);
} else if (saldo == 200){
  ajuste = (saldo*percentQuatro)+saldo;
   printf("SEU SALARIO EH %d\n",ajuste);
}




 }
