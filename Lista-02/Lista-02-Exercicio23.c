#include <stdio.h>
int main(){
 float H,HoraExt,resultado,NmrFaltas;
  printf("IFORME O NUMERO DE HORAS EXTRAS\n");
   scanf("%f",&HoraExt);
   printf("INFORME O NUMERO DE FALTAS DO FUNCIONARIO\n");
    scanf("%f",&NmrFaltas);
    H = (HoraExt)-0.6*(NmrFaltas);
    printf("O VALOR DA OPERCAO EH %.2f\n",H);
    if(H>2400){
        printf("PARABENS SUA GRATIFICACAO EH DE 500R$\n");

    }else if((H<2400)&&(H>=1800)){
         printf("PARABENS SUA GRATIFICACAO EH DE 400R$\n");
    }else if ((H<1800)&&(H>=1200)){
          printf("PARABENS SUA GRATIFICACAO EH DE 300R$\n");
    }else if ((H<1200)&&(H>=600)){
           printf("PARABENS SUA GRATIFICACAO EH DE 200R$\n");
    }else if(H<600){
            printf("PARABENS SUA GRATIFICACAO EH DE 100R$\n");
    }












return 0;
}
