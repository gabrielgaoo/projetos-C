/*
16. Faça um programa em C que, para um número indeterminado de alunos, faça para cada uma deles:
 ler o nome e as três notas do aluno (a leitura do nome FIM indica o fim dos dados - flag);
 calcular a média do aluno (usando a função MEDIA criada na questão anterior);
 exibir o nome e a média do aluno.

*/
#include <stdio.h>
#include <string.h>
int MEDIA(int a,int b,int c);
int main(){
char nome[20];
int num,ndois,ntres;
int fim = 1;
int aux;
char encerrou[]="FIM";
while(fim != 0){
 printf("digite o nome do aluno\n");
 scanf("%s", nome);
 fim =  strcmp(nome,encerrou);
   if(fim == 0){
   break;
   }

 printf("digite as tres notas respectivamente\n");
 printf("P1-->");
 scanf("%d",&num);
 printf("\n");
 printf("P2-->");
 scanf("%d",&ndois);
 printf("\n");
 printf("P3-->");
 scanf("%d",&ntres);
 printf("\n");
  aux = MEDIA(num,ndois,ntres);

 printf(" O ALUNO==> %s\n TEM MEDIA==> %d\n",nome,aux);


}
return 0;
}
int MEDIA(int a,int b,int c){
    int aux;
    aux = (a+b+c)/3;
    return aux;

}
