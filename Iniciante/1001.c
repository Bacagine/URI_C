/***************************************************************************
 * 1001.c: Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efe- *
 * tue a soma de A e B atribuindo o seu resultado na variável X. Imprima X *
 * conforme exemplo apresentado abaixo. Não apresente mensagem alguma além *
 * daquilo que está sendo especificado e não esqueça de imprimir o fim de  *
 * linha após o resultado, caso contrário, você receberá                   *
 * "Presentation Error".                                                   *
 *                                                                         *
 * Compilar com gcc 1001.c -o 1001                                         *
 *                                                                         *
 * Programa criado por Gustavo Bacagine <gustavo.bacagine@protonmail.com>  *
 *                                                                         *
 * Data: 05/11/2019                                                        *
 ***************************************************************************/

#include <stdio.h> // -> Biblioteca padrão de entrada e saída

int main(void){
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    int soma = num1 + num2;
    
    printf("X = %d\n", soma);
    
    return 0;
}
