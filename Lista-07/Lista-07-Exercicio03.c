/*
3. Faça uma função em C chamada CUBO que receba um valor do tipo float e retorne a potência elevado a
3 do mesmo.
*/

#include <stdio.h>
#include <math.h>
 float CUBO(float A);

int main(){
    float cubo;
    float resp;
    int c;
    printf("INFORME A BASE \n");
    scanf("%f",&cubo);
    resp = CUBO(cubo);
    printf("O VALOR EH %.2f\n",resp);

return 0;
}
 float CUBO(float A){
   float aux;
   aux = pow (A,3);
        return aux;

 }

