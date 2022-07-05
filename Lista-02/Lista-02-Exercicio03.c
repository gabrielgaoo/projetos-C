/*
Faça um programa em C que receba 2 números, e mostre o menor.
*/
#include <stdio.h>
 int main(){
 int numUM,numDois;
 printf ("DIGITE O PRIMEIRO NUMERO\n");
   scanf("%d",&numUM);
 printf ("DIGITE O SEGUNDO NUMERO\n");
   scanf("%d",&numDois);
     if(numUM>numDois)
     {
    printf("O PRIMEIRO NUMERO E MAIOR QUE O SEGUNDO\n");
      }
        else if (numUM<numDois)
           {
    printf("O SEGUNDO NUMERO E MAIOR QUE PRIMEIRO\n");
           }

  return 0;
 }
