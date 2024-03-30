#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"

typedef struct Circulo {
    float x, y, r;
} Circulo;

Circulo* circ_cria(float x, float y, float r) {
    Circulo* c = malloc(sizeof(Circulo));
    c->x = x;
    c->y = y;
    c->r = r;
    return c;
}

void circ_libera(Circulo* c) {
    if (c != NULL) {
        free(c);
    }
}

float circ_area(Circulo* c) {
    if (c != NULL) {
        return 3.14 * c->r * c->r;
    }
    return 0;
}

int circ_concentricos(Circulo* c1, Circulo* c2) {
    if (c1 != NULL && c2 != NULL) {
        return c1->x == c2->x && c1->y == c2->y && c1->r == c2->r;
    }
    return 0;
}

float circ_raio(Circulo* c) {
    if (c != NULL) {
        return c->r;
    }
    return 0;
}