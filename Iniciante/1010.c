/**************************************************************************
 * 1010.c: Neste problema, deve-se ler o código de uma peça 1, o número   *
 * de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o *
 * número de peças 2 e o valor unitário de cada peça 2. Após, calcule e   *
 * mostre o valor a ser pago.                                             *
 *                                                                        *
 * Compilar com gcc 1010.c -o 1010                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
	
	int num1, num2, num_uni1, num_uni2;
	double val_uni1, val_uni2, val_total;
	
	scanf("%d %d %lf", &num1, &num_uni1, &val_uni1);
	scanf("%d %d %lf", &num2, &num_uni2, &val_uni2);
	
	val_total = (num_uni1 * val_uni1) + (num_uni2 * val_uni2);
	
   printf("VALOR A PAGAR: R$ %.2lf\n", val_total);
	
	return 0;
}
