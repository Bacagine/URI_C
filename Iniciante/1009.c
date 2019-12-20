/***************************************************************************
 * 1009.c: Faça um programa que leia o nome de um vendedor, o seu salário  *
 * fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Saben- *
 * do que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, *
 * informar o total a receber no final do mês, com duas casas decimais.    *
 *                                                                         *
 * Compilar com gcc 1009.c -o 1009                                         *
 *                                                                         *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>  *
 *                                                                         *
 * Data: 05/11/2019                                                        *
 ***************************************************************************/

#include <stdio.h>

int main(void){
	
   char nome;
   double vendas, fix_salary, total;
   
   scanf("%s %lf %lf", &nome, &fix_salary, &vendas);
   
   total = (vendas * 0.15) + fix_salary;
	
	printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;
}
