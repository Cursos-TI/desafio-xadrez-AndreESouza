#include <stdio.h>
int main () {

    int i;

    // Movimento da Torre (Vertical) usando FOR
    printf("Movimento da Torre (para cima): \n");
    for(i=1; i<=8; i++){
    printf("Torre move para a casa acima %d\n", i);
    }
    printf(" \n");

    // Movimento do Bispo (diagonal) usando WHILE
    printf("Movimento do Bispo (diagonal superior direita): \n");
    i = 1;
    while(i<=8) {
    printf("Bispo move para a diagonal %d\n", i);
    i++;
    }
    printf(" \n");

    // Movimento da Rainha (horizontal) usando DO-WHILE
    printf("Movimento da Rainha (para a direita): \n");
    i = 1;
    do {
    printf("Rainha move para a direita %d\n", i);
    i++;
    } while(i<=8);
    printf(" \n");

return 0;
}