/*
Data: 28/09/2019
Questão 2: Faça um algoritmo que receba 3 notas digitadas
pelo usuário. Retorne a média ponderada dessas notas.
*/

#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite tres notas: \n");
    scanf("%f%f%f", &n1, &n2, &n3);
    
    media = ((n1 * 3) + (n2 * 3) + (n3 * 3)) / 9;

    printf("A media ponderada e: %.1f", media);

}
