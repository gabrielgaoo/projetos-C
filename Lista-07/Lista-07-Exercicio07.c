/*
7. Faça uma função em C que receba uma string S e retorne o número de espaços existentes na mesma.
*/
#include <stdio.h>
#include<string.h>
#define tam 50
  int STRING(char v[],int qtd);
int main(){
 char str[tam];
 int aux;
printf("DIGITE A STRING\n");
scanf("%s",str);
 aux = STRING(str,tam);
printf("A STRING TEM %d CARACTERES\n",aux);



return 0;
}
int STRING(char v[],int qtd){
    int aux;
  aux =  strlen(v);
       return aux;

}
