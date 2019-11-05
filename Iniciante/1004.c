/**************************************************************************
 * 1004.c: Leia dois valores inteiros. A seguir, calcule o produto entre  *
 * estes dois valores e atribua esta operação à variável PROD. A seguir   *
 * mostre a variável PROD com mensagem correspondente.                    *
 *                                                                        *
 * Compilar com gcc 1004.c -o 1004                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int prod = num1 * num2;
	printf("PROD = %d\n", prod);
	
	return 0;
}
