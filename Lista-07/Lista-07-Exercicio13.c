/*
13. Fa�a uma fun��o em C chamada MEDIA que retorne a m�dia aritm�tica de tr�s valores reais (X, Y e Z)
passados como par�metros.
*/
#include <stdio.h>
  int MEDIA(int a,int b,int c);
int main(){
    int x,y,z,aux;
    printf("digite os valores respectivamente de (x)--(y)--(z)\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    aux =  MEDIA(x,y,z);
    printf("a media aritmetica dos tres valores eh -->%d \n",aux);
return 0;
}
int MEDIA(int a,int b,int c){
    int  aux;
     aux = (a+b+c)/3;


return aux;

}
