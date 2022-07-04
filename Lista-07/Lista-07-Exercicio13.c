/*
13. Faça uma função em C chamada MEDIA que retorne a média aritmética de três valores reais (X, Y e Z)
passados como parâmetros.
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
