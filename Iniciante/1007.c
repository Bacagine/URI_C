/**************************************************************************
 * 1007.c: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e  *
 * mostre a diferença do produto de A e B pelo produto de C e D segundo a *
 * fórmula: DIFERENCA = (A * B - C * D).                                  *
 *                                                                        *
 * Compilar com gcc 1007.c -o 1007                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
	 
	 int a, b, c, d, diferenca;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    diferenca = ((a * b) - (c * d));
    
    printf("DIFERENCA = %d\n", diferenca);

	return 0;
}
