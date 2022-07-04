#include <stdio.h>
 int main(){
  float preco,procedencia;
  int codigo;
  printf("INFORME O PRECO DO PRODUTO\n");
   scanf("%f",&preco);
  printf("INFORME O SEU CODIGO DE ORIGEM \n");
   scanf("%d",&codigo);
  printf("O PRECO DO PRODUTO EH %.2f\n",preco);
  switch(codigo){
   case 1:
   printf("PROCEDENCIA---> SUL\n");
     break;
   case 2:
    printf("PROCEDENCIA---> NORTE\n");
    break;
   case 3:
   printf("PROCEDENCIA---> LESTE\n");
    break;
   case 4:
    printf("PROCEDENCIA---> OESTE\n");
    break;

   default:{

if((codigo==5)||(codigo==6)){
      printf("PROCEDENCIA---> NORDESTE\n");

}  else if((codigo==7)||(codigo==8)||(codigo==9)){
     printf("PROCEDENCIA---> SUDESTE\n");
}  else if ((codigo>=10)&&(codigo<=20)){
    printf("PROCEDENCIA---> CENTRO-OESTE\n");
}  else if((codigo>=21)&&(codigo<=30)){
    printf("PROCEDENCIA---> NORDESTE\n");
}  else {
    printf("A OPCAO EH INVALIDA\n");
}

}

}







  return 0;
 }
