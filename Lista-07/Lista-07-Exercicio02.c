/*
2. Faça uma função em C que recebe uma string S e um inteiro positivo N e exiba a string S por N vezes
seguidas na tela.
*/
#include <stdio.h>
  void  funcao(int n,char s);
int main(){
  int N;
  char S;
  funcao(N,S);


return 0;
}
void  funcao(int n,char s){
    int i;
      printf("DIGITE A STRING \n");
      scanf("%c",&s);
      printf("DIGITE O NUMERO DE VEZES \n");
      scanf("%d",&n);
      for (i=0;i<n;i++){
        printf("%c\n",s);
      }

}
