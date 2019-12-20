/**************************************************************************
 * 1012.c: Escreva um programa que leia três valores com ponto flutuante  *
 * de dupla precisão: A, B e C. Em seguida, calcule e mostre:             *
 *                                                                        *
 * a) a área do triângulo retângulo que tem A por base e C por altura.    *
 * b) a área do círculo de raio C. (pi = 3.14159)                         *
 * c) a área do trapézio que tem A e B por bases e C por altura.          *
 * d) a área do quadrado que tem lado B.                                  *
 * e) a área do retângulo que tem lados A e B.                            *
 *                                                                        *
 * Compilar com gcc 1012.c -o 1012                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 19/12/2019                                                       *
 **************************************************************************/

#include <stdio.h>
#include <math.h>  /* Biblioteca para poder usar a 
                    * função pow (usada para fazer 
                    * potencia de variaveis)*/
#define PI 3.14159 // Definição do valor de pi pedida no enunciado

int main(void){
    
    double a,b,c;
    double triangulo, circle, trapezio, quadrado, retangulo;
//     const float pi = 3.14159; // Outra maneira de definir o valor de pi
    scanf("%lf %lf %lf", &a, &b, &c);
    
    triangulo = (a * c)/2;
    circle = PI * pow(c,2);
    trapezio = ((a + b) * c)/2;
    quadrado = pow(b,2);
    retangulo = a * b;
    
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);
    
    return 0;
}
