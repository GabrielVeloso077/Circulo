#ifndef CIRCULO_H
#define CIRCULO_H

#include <stdlib.h> // Inclui a biblioteca padrão para usar malloc e free
#include <math.h> // Inclui a biblioteca de funções matemáticas, como M_PI

// Definição da estrutura Circulo
typedef struct {
    float x; // Coordenada x do centro do círculo
    float y; // Coordenada y do centro do círculo
    float raio; // Raio do círculo
} Circulo;

/**
 * @brief Cria um círculo com centro (x,y) e raio r.
 * 
 * @param x Coordenada x do centro do círculo.
 * @param y Coordenada y do centro do círculo.
 * @param r Raio do círculo.
 * @return Ponteiro para o círculo criado, ou NULL se houver erro na alocação de memória.
 */
Circulo* circ_cria(float x, float y, float r);

/**
 * @brief Libera a memória alocada para um círculo.
 * 
 * @param c Ponteiro para o círculo a ser liberado.
 */
void circ_libera(Circulo *c);

/**
 * @brief Calcula a área de um círculo.
 * 
 * @param c Ponteiro para o círculo.
 * @return Área do círculo.
 */
float circ_area(Circulo *c);

/**
 * @brief Verifica se dois círculos são concêntricos.
 * 
 * @param c1 Ponteiro para o primeiro círculo.
 * @param c2 Ponteiro para o segundo círculo.
 * @return 1 se os círculos são concêntricos, 0 caso contrário.
 */
int circ_concentricos(Circulo *c1, Circulo *c2);

/**
 * @brief Obtém o raio de um círculo.
 * 
 * @param c Ponteiro para o círculo.
 * @return Raio do círculo.
 */
float circ_raio(Circulo *c);

#endif /* CIRCULO_H */
