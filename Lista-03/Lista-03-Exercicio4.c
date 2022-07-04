#include <stdio.h>
 int main(){

    int total, gr, i;

    gr = 1;
    total = 1;

    for (i = 2; i <= 3; i++){
        gr = 2 * gr;
        total = total + gr;
    }

    printf("O total de graos eh %d\n",total);








  return 0;
 }
