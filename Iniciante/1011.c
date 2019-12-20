/****************************************************************************
 * 1011.c: Faça um programa que calcule e mostre o volume de uma esfera     *
 * sendo fornecido o valor de seu raio (R). A fórmula para calcular o       *
 * volume é: (4/3) * pi * R^3. Considere (atribua) para pi o valor 3.14159. *
 * Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois       *
 * algumas linguagens (dentre elas o C++), assumem que o resultado da       *
 * divisão entre dois inteiros é outro inteiro.                             *
 *                                                                          *
 * Compilar com gcc 1011.c -o 1011                                          *
 *                                                                          *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>   *
 *                                                                          *
 * Data: 19/12/2019                                                         *
 ****************************************************************************/

#include <stdio.h>
#include <math.h>  /* Biblioteca para poder usar a 
                    * função pow (usada para fazer 
                    * potencia de variaveis)*/
#define PI 3.14159 // Definição do valor de pi pedida no enunciado

int main(void){
    
    int raio;
    double volume;
//     const float pi = 3.14159; // Outra maneira de definir o valor de pi
    scanf("%i", &raio);
    
    volume = (4.0/3) * PI * pow(raio,3); // Calculo do volume
    
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
