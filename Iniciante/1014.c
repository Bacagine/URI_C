/**************************************************************************
 * 1014.c: Calcule o consumo médio de um automóvel sendo fornecidos a     *
 * distância total percorrida (em Km) e o total de combustível gasto      *
 * (em litros).                                                           *
 *                                                                        *
 * Compilar com gcc 1014.c -o 1014                                        *
 *                                                                        *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com> *
 *                                                                        *
 * Data: 19/12/2019                                                       *
 **************************************************************************/

#include <stdio.h>

int main(void){
    
    int km;        // Distancia percorrida
    float l;      // Combustível gasto
    float media; // Calculo do consumo médio do automóvel
    
    scanf("%i %f", &km, &l);
    
    media = km/l;
    
    printf("%.3f km/l\n", media);
    
    return 0;
}
