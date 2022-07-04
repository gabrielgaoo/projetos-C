/*
5. Faça uma função em C que receba três números e usando a função DOBRO da questão anterior imprima
o dobro de cada um dos números. Use no mínimo 2 funções.
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
