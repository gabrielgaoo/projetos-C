#include <stdio.h>
#define reajuste 0.30
int main(){
int salario,ajuste;
 printf("INFORME SEU SALARIO ");
 scanf("%d",&salario);
 if(salario<=500){

    ajuste = (salario*reajuste)+salario;
    printf("ESTE EH SEU SALARIO REAJUSTADO %d ",ajuste);

}
   else{
    printf("VOCE NAO TEM DIREITO DE RECEBER O REAJUSTE!!!");

}







 return 0;
}
