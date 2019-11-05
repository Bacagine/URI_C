/**************************************************************************
 * 1005.c: Leia 2 valores de ponto flutuante de dupla precisão A e B, que *
 * correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno,*
 * sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos  *
 * pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0,      *
 * sempre com uma casa decimal.                                           *
 *                                                                        * 
 * Compilar com gcc 1005.c -o 1005                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	double media1 = ((num1 * 3.5) + (num2 * 7.5)) / 11;
	
	printf("MEDIA = %.5lf\n", media1);
	
	return 0;
}
