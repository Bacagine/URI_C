/***************************************************************************
 * 1006.c: Leia 3 valores, no caso, variáveis A, B e C, que são as três    *
 * notas de um aluno. A seguir, calcule a média do aluno, sabendo que a    *
 * nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere *
 * que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.       *
 *                                                                         *
 * Compilar com gcc 1006.c -o 1006                                         *
 *                                                                         *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>  *
 *                                                                         *
 * Data: 05/11/2019                                                        *
 ***************************************************************************/

#include <stdio.h>

int main(void){
	double num1, num2, num3;
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	double media2 = (((num1 * 2) + (num2 * 3) + (num3 * 5)) / 10);
	
	printf("MEDIA = %.1lf\n", media2);
	
	return 0;
}
