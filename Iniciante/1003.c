/*******************************************************************************
 * 1003.c: Leia dois valores inteiros, no caso para variáveis A e B. A seguir, *
 * calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o    *
 * valor desta variável.                                                       *
 *                                                                             *
 * Compilar com gcc 1003.c -o 1003                                             *
 *                                                                             *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>      *
 *                                                                             *
 * Data: 05/11/2019                                                            *
 *******************************************************************************/

#include <stdio.h>

int main(void){
	int num1, num2, soma;
	scanf("%d %d", &num1, &num2);

	soma = num1 + num2;
	
	printf("SOMA = %d\n", soma);
	
	return 0;
}
