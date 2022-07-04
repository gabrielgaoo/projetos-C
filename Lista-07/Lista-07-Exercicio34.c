/*
34. Faça uma função em C que calcule e retorne o número de arranjos de n elementos p a p. A fórmula do
arranjo é a seguinte:
A= n! / (n-p)!
Caso não seja capaz de calcular tal arranjo a função deve retornar -1. Um algoritmo para testar tal
função também deve ser escrito..
*/

#include <stdio.h>
   int  arranjofat(int N );
   //int difreca(int N, int P);
   int  arranjo(int AUX );
  // int  divisao (int AUX2,int n);
int main(){
    int p,n,retorno;
    int aux,auxdois;
    printf("digite um valor para o calculo do arranjo\n");
    scanf("%d",&n);
    printf("digite o valor P\n");
    scanf("%d",&p);

    retorno = arranjofat(n);
      aux = difenca(n,p);
      auxdois = arranjo(aux);
     divisao(auxdois,retorno);
      printf("O RESULTADO DO ARRANJO EH %d \n", divisao(aux2,retorno));

return 0;
}
  int arranjofat(int N){
      int aux;
         if(N==0){
            return 1;
            }
        else{
                aux =  N * arranjofat(N-1);
        }
 return aux;
}
int difreca(int P, int N){
     int aux;
     aux = N - P;
     return aux;

}
 int  arranjo(int AUX ){
     int aux;
     if(AUX == 0){

        return 1;
     }
     else {
            aux = AUX *arranjo(AUX-1);
    return aux;
     }
 }
 int divisao(int AUXdois,int n){
       int resp = n/AUXdois;
       return resp;
 }

