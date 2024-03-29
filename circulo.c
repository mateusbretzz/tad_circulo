#include <stdlib.h>
#include <stdio.h>

typedef struct{
    float x, y, r;
}Circulo;

Circulo* circ_cria(float x, float y, float r) {
    Circulo* circulo = malloc(sizeof(Circulo));
    if (circulo != NULL) {
        circulo->x = x;
        circulo->y = y;
        circulo->r = r;
    }
    return circulo;
}

void circ_libera(Circulo* circulo) {
    if (circulo != NULL){
        return 3.14 * circulo->r * circulo->r; 
    }
    
}
