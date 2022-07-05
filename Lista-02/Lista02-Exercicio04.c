/*
Faça um programa em C que receba dois números e execute as operações listadas a
seguir de acordo com a escolha do usuário.
ESCOLHA DO USUÁRIO OPERAÇÃO
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar a
execução do programa. Lembre-se que na operação 4 o segundo número deve ser
diferente de zero.
*/
#include <stdio.h>
 int main (){
  int op;
  float NumUM,NumDois,resultado;
  printf("DIGITE O PRIMEIRO NUMERO\n");
   scanf("%f",&NumUM);
  printf("DIGITE O SEGUNDO NUMERO\n");
   scanf("%f",&NumDois);

 printf("DIGITE 1 SE DESEJA REALIZAR A MEDIA DESSES VALORES\n");
 printf("DIGITE 2 SE DESEJA REALIZAR A DIFIRENCA DO MAIOR PELO MENOR\n");
 printf("DIGITE 3 SE DESEJA REALIZAR O PRODUTO ENTRES ESSES VALORES\n");
 printf("DIGITE 4 SE DESEJA REALIZAR A DIVISAO ENTRE ESSES VALORES\n");
  scanf("%d",&op);
    switch (op)
    {
       case 1 :
         resultado = (NumUM+NumDois)/2;
           printf("A MEDIA DOS VALORES EH %2.f",resultado);
       break;
         case 2:
            if(NumUM>NumDois)
              {
               resultado= NumUM-NumDois;
                 printf("A DIFERECA DOS VALORES EH %2.f",resultado);
              }
                else if(NumDois>NumUM)
                {
                   resultado = NumDois-NumUM;
                      printf("A DIFERECA DOS VALORES EH %2.f",resultado);
                }
         break;
              case 3:
                  resultado = NumUM*NumDois;
                        printf("O PRODUTO DOS VALORES EH %2.f",resultado);
              break;
                     case 4:
                         if(NumUM>NumDois&&NumUM!= 0&&NumDois!=0)
                         {
                             resultado = NumUM/NumDois;
                                  printf("A DIVISAO ENTRE OS VALORES EH %2.f",resultado);
                         }
                              else if (NumDois>NumUM&&NumUM!= 0&&NumDois!=0)
                              {
                                 resultado = NumDois/NumUM;
                                     printf("A DIVISAO ENTRE OS VALORES EH %2f",resultado);
                              }
                      break;
         default :
            printf("A OPCAO DIGITADA E INVALIDA!!!");


    }

 return 0;
}
