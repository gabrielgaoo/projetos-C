/*
1. Faça uma função em C que receba e exiba o seu nome.
*/
#include <stdio.h>
#define tam 20
  void nome(char a[] , int qtd);
int main(){
  char A[20];
  printf("INSIRA SEU NOME\n");
  scanf("%s", A);
  nome(A,tam);

return 0;
}
void  nome(char a[],int qtd){
    printf("%s",a);

}

