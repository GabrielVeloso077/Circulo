#include "circulo.h"
#include <stdlib.h>
#include <math.h>

Circulo* circ_cria(float x, float y, float r) {
    Circulo *c = (Circulo*)malloc(sizeof(Circulo));
    if (c != NULL) {
        c -> x = x;
        c->y = y;
        c->raio = r;
    }
    return c;
}

void circ_libera(Circulo *c) {
    if (c != NULL) {
        free(c);
    }
}

float circ_area(Circulo *c) {
    return M_PI * c->raio * c->raio;
}

int circ_concentricos(Circulo *c1, Circulo *c2) {
    return (c1 -> x == c2->x && c1->y == c2->y);
}

float circ_raio(Circulo *c) {
    return c->raio;
}
