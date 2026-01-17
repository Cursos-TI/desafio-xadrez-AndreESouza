#include <stdio.h>
int main() {

    // Movimento do Cavalo: Duas casas para baixo, Uma casa para a esquerda
    int PassosBaixo = 2;
    int PassosEsquerda = 1;

    // Linha em branco para separar dos movimentos anteriores
    printf("\n");

    // Loop for: Controla o movimento principal (para baixo)
    for (int i = 0; i < PassosBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop while: movimento perpendicular (para a esquerda)
    int Contador = 0;
    while (Contador < PassosEsquerda) {
        printf("Esquerda\n");
        Contador++;
    }

    return 0;
}
