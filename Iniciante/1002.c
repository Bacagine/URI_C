/**************************************************************************
 * 1002.c: A fórmula para calcular a área de uma circunferência é:        *
 * area = π . raio2. Considerando para este problema que π = 3.14159:     *
 * - Efetue o cálculo da área, elevando o valor de raio ao quadrado e     *
 *   multiplicando por π.                                                 *
 *                                                                        *
 * Compilar com gcc 1002.c -o 1002 -lm                                    *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>
#include <math.h> /* -> Biblioteca ultilizada para usar a função 
							   pow para elevar o raio ao quadrado */
#define PI 3.14159 // Macro com o valor de PI pedida no enunciado do exercicio

int main(void){
	double raio;
	scanf("%lf", &raio);
	double area = (PI * pow(raio,2));
	printf("A=%.4lf\n", area);
	
	return 0;
}
