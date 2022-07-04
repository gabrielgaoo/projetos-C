/*
17. Faça uma função em C chamada POTENCIA que realize a operação de potenciação e que contenha os
seguintes parâmetros formais:
VALOR: número inteiro que se deseja elevar à potência.
POT: potência elevada
*/
#include <stdio.h>
   int POTENCIA (int VALOR,int POT);
int main(){
   int valor;
   int pot,resp;
   printf("digite o valor \n");
   scanf("%d",&valor);
   printf("digite a potencia elevada \n");
   scanf("%d",&pot);
    resp = POTENCIA(valor,pot);
   printf("%d",resp);



return 0;
}
 int  POTENCIA (int VALOR,int POT){
    if(POT>0){
        return VALOR * POTENCIA(VALOR,POT-1);
    }
     else{
        return 1;
     }
   }





