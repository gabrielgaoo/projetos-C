/*
37. Fa�a uma fun��o em C que verifique quantas vezes um n�mero inteiro x � divis�vel por um n�mero
inteiro y. A fun��o deve retornar -1 caso n�o seja poss�vel calcular. Escreva tamb�m um algoritmo para
testar tal fun��o.
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
