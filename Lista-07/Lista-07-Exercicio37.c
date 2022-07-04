/*
37. Faça uma função em C que verifique quantas vezes um número inteiro x é divisível por um número
inteiro y. A função deve retornar -1 caso não seja possível calcular. Escreva também um algoritmo para
testar tal função.
*/
#include <stdio.h>
  int  qtdD(int X ,int Y);
int main(){
  int x,y;
  int aux;
  printf("DIVISAO\n");
  printf("escreva o divisor do calculo \n ");
  scanf("%d",&x);
  printf("escreva o dividendo do calculo \n ");
  scanf("%d",&y);
  aux = qtdD(x,y);
     printf("%d",aux);



return 0;
}
 int qtdD(int X ,int Y){
      int aux;
     if(X == 0){
        return 0;

     }
     aux = Y/qtdD(X-1);
     printf("%d",aux);
   return aux;

}
