 /*
 8. Faça uma função em C que receba uma string S e um valor inteiro N e retorne os N primeiros caracteres
da string S.
// NÃO TERMINEI
 */
 #include<stdio.h>
 #include <string.h>
 #define tam 50
    void funcao(char S[],int qtd ,int N);
 int main(){
  char s[tam];
  int n;
  printf("DIGITE A STRING\n");
  scanf("%s", s);
  printf("DIGITE O NUMERO DE CARACTERES QUE DEVEM SER EXIBIDOS\n");
  scanf("%d",&n);
    funcao(s,tam,n);

return 0;
 }
 void funcao(char S[],int qtd ,int N){
    char aux[N];
       strcpy(aux,S);


  printf("%s\n",aux);
 }
