/*
4. Faça uma função em C chamada DOBRO que receba um valor do tipo float e retorne o dobro do mesmo.
*/
   int DOBRO(int a);
#include <stdio.h>
int main(){
int x,aux;
  printf("digite um numero\n");
  scanf("%d",&x);
  aux = DOBRO(x);
  printf("%d\n",aux);




return 0;
}
int DOBRO(int a){
     int aux;
     aux = a*2;
return aux;
    }
