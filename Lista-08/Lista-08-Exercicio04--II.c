#include<stdio.h>
 int main(){
   FILE *arq;
   arq = fopen("Lista-08-Exercicio04.txt","r");
   if(arq==NULL){
    printf("erro!\n");
   exit(1);
   }
    char frase [1000];
    while(fgets(frase,1000,arq) != NULL){
        printf("%s",frase);
    }

 fclose(arq);


 return 0;
 }
