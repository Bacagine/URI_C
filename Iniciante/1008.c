/**************************************************************************
 * 1008.c: Escreva um programa que leia o número de um funcionário, seu   *
 * número de horas trabalhadas, o valor que recebe por hora e calcula o   *
 * salário desse funcionário. A seguir, mostre o número e o salário do    *
 * funcionário, com duas casas decimais.                                  *
 *                                                                        *
 * Compilar com gcc 1008.c -o 1008                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 05/11/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
	
    int func_num, hours;
    double salary_hour, salary;
    
    scanf("%d %d %lf", &func_num, &hours, &salary_hour);
    
    salary = salary_hour * hours;
    
    printf("NUMBER = %d\n", func_num);
    printf("SALARY = U$ %.2lf\n", salary);

	return 0;
}
