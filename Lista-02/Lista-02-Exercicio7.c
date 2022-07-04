#include <stdio.h>
#define reajusteUm 0.35
#define reajusteDois 0.15

 int main(){

 int salario,ajuste;
 printf("INFORME SEU SALARIO\n");
 scanf("%d", &salario);
 if (salario<=300){
    ajuste= (salario*reajusteUm)+salario;
    printf("SEU SALARIO EH %d",ajuste);

} else if (salario>300){
   ajuste= (salario*reajusteDois)+salario;
   printf("SEU SALARIO EH %d",ajuste);

}








  return 0;
 }
