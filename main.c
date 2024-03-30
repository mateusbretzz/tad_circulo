#include "circulo.h"
#include <stdio.h>

int main() {
    // Criar aqui os dois círculos
    Circulo* c1 = circ_cria(0, 0, 10);
    Circulo* c2 = circ_cria(0, 0, 5);

    // Calcular as areas dos cículos
    printf("A area do circulo 1 : %.2f\n", circ_area(c1));
    printf("A area do circulo 2 : %.2f\n", circ_area(c2));

    // Ver se os círculos têm o mesmo centro
    if (circ_concentricos(c1, c2)) {
        printf("Os circulos tem o mesmo centro.\n");
    } else {
        printf("Os circulos nao tem o mesmo centro.\n");
    }

    // Obter o raio do círculo 1
    printf("O raio do circulo 1: %.2f\n", circ_raio(c1));

    // Liberar a memória dos círculos
    circ_libera(c1);
    circ_libera(c2);

    return 0;
}