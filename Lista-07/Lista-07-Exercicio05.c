/*
5. Fa�a uma fun��o em C que receba tr�s n�meros e usando a fun��o DOBRO da quest�o anterior imprima
o dobro de cada um dos n�meros. Use no m�nimo 2 fun��es.
*/

#include <stdio.h>

    void recebe (int *a, int *b,int*c);
    void DOBRO(int *a,int *b,int *c);

int main(){
int x,y,z;
recebe(&x,&y,&z);
   DOBRO(&x,&y,&z);




return 0;
}

   void recebe (int *a, int *b,int*c){
   printf("digite os valores\n");
   scanf("%d",a);
   scanf("%d",b);
   scanf("%d",c);
   }
  void DOBRO(int *a,int *b,int *c){
   int aux,AUX,XUA;
   aux = *a *2;
   *a = aux;
   AUX = *b *2;
   *b = AUX;
   XUA = *c*2;
   *c = XUA;
  printf("%d<-->%d<--->%d",*a,*b,*c);
 }
