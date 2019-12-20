/***************************************************************************
 * 1013.c: Faça um programa que leia três valores e apresente o maior dos  *
 * três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula: *
 * MaiorAB = (a+b+abs(a-b))/2                                              *
 * Obs.: a fórmula apenas calcula o maior entre os dois primeiros          *
 * (a e b). Um segundo passo, portanto é necessário para chegar no         *
 * resultado esperado.                                                     *
 *                                                                         *
 * Compilar com gcc 1013.c -o 1013                                         *
 *                                                                         *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>  *
 *                                                                         *
 * Data: 19/12/2019                                                        *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h> // Biblioteca para poder usar a função abs

int main(void){
    
    int num1, num2, num3, maiorAB, maior;
    
    scanf("%i %i %i", &num1, &num2, &num3);
    
    maiorAB = (num1 + num2 + abs(num1 - num2))/2;       // Verifica qual dos dois primeiros números é o maior
    
    maior = (maiorAB + num3 + abs(maiorAB - num3))/2; /* Pega o maior entre os dois 
                                                       * primeiros números e compara 
                                                       * com o terceiro número para 
                                                       * ver qual é o maior */
    
    printf("%i eh o maior\n", maior); // Mostra o maior entre os três números
    
    return 0;
}
