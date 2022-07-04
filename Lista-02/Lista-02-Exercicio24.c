#include <stdio.h>
int main (){
  int idade;
  char nome[20],sexo;
  printf("INFORME SEU NOME\n");
   scanf("%s", nome);
  printf("INFORME SEU SEXO (M)-PARA MASCULINO,(F)- PARA FEMININO-->\n");
   scanf("%s",&sexo);
  printf("INFORME SUA IDADE--> \n");
   scanf("%d",&idade);
  if(idade<18){
    printf("%s", nome);
    printf("MENOR");
 }else if((idade>65)&&(sexo=='M')){
      printf("%s\n", nome);
      printf("APOSENTADO\n");
 }else if((idade>60)&&(sexo=='F')){
     printf("%s\n", nome);
      printf("APOSENTADA\n");

 }










 return 0;
}
