#include <stdio.h>
#include "circulo.h"

int main() {
    Circulo *circ1 = circ_cria(0, 0, 5);
    Circulo *circ2 = circ_cria(0, 0, 10);

    if (circ1 == NULL || circ2 == NULL) {
        printf("Erro ao criar os circulos.\n");
        return 1;
    }

    printf("Area do circulo 1: %.2f\n", circ_area(circ1));
    printf("Area do circulo 2: %.2f\n", circ_area(circ2));

    if (circ_concentricos(circ1, circ2)) {
        printf("Os circulos sao concentricos.\n");
    } else {
        printf("Os circulos nao sao concentricos.\n");
    }

    circ_libera(circ1);
    circ_libera(circ2);

    return 0;
}
