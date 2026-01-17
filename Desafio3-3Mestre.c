#include <stdio.h>

// Constantes que definem o número de casas //
#define CASAS_TORRE 4
#define CASAS_BISPO 3
#define CASAS_RAINHA 5


// ---------------- TORRE ---------------- //
// Movimento recursivo da Torre para cima //
void MoverTorre(int casas) {
    if (casas == 0) {
        return; // Caso base da recursão
    }
    printf("Cima\n");
    MoverTorre(casas - 1); // Chamada recursiva
}


// ---------------- RAINHA ---------------- //
// Movimento recursivo da Rainha para a direita //
void MoverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    MoverRainha(casas - 1);
}


// ---------------- BISPO ---------------- //
// Movimento do Bispo:
// - Implementado com recursividade
// - Usa loops aninhados:
//   externo → vertical
//   interno → horizontal //
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }
    for (int vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }
    moverBispo(casas - 1); // Chamada recursiva
}


// ---------------- CAVALO ---------------- //
// Movimento do Cavalo em "L":
// - 2 casas para cima
// - 1 casa para a direita
// Usa loops aninhados e controle com break/continue //
void MoverCavalo() {
    for (int vertical = 1; vertical <= 3; vertical++) {

        if (vertical <= 2) {
            printf("Cima\n");
            continue; // Continua subindo
        }
        for (int horizontal = 1; horizontal <= 2; horizontal++) {
            printf("Direita\n");
            break; // Apenas uma casa para a direita
        }
    }
}


// ---------------- MAIN ---------------- //
int main() {

    printf("Movimento da Torre:\n");
    MoverTorre(CASAS_TORRE);

    printf("\nMovimento do Bispo:\n");
    MoverBispo(CASAS_BISPO);

    printf("\nMovimento da Rainha:\n");
    MoverRainha(CASAS_RAINHA);

    printf("\nMovimento do Cavalo:\n");
    MoverCavalo();

    return 0;
}
