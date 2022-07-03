# include <stdio.h>
 int main(){
 int um,dois,op,resultado;
 printf("DIGITE O PRIMEIRO NUMERO\n");
 scanf("%d",&um);
 printf("DIGITE O SEGUNDO NUMERO\n");
 scanf("%d",&dois);
 printf("DIGITE 1 SE DESEJA REALIZAR A MEDIA DOS DOIS NUMEROS\n");
 printf("DIGITE 2 SE DESEJA REALIZAR DIFERENCA DO MAIOR PELO MNEOR\n");
 printf("DIGITE 3 SE DESEJA REALIZAR O PRODUTO OS DOIS NUMEROS\n");
  scanf("%d",&op);

 switch(op){
 case 1:
    resultado = (um+dois)/2;
    printf("O RESULTADO DA MEDIA EH %d\n",resultado);
    break;
 case 2:
     if (um>dois){
     resultado =um-dois;
     printf("O RESULTADO DA DIFERENCA EH %d\n",resultado);
     }else if(um<dois){
      resultado = dois-um;
       printf("O RESULTADO DA DIFERENCA EH %d\n",resultado);
     } break;
 case 3:
    resultado = um*dois;
    printf("O RESULTADO DO PRODUTOS DOS NUMEROS EH %d\n",resultado);
   break;
 default:
    printf("A OPCAO QUE VOCE DIGITOU E INVALIDA");

 }
 printf("ola mundo");






 return 0;
 }
