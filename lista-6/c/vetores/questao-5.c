#include <stdio.h>


int main() {
    int vetor[100], 
        frequencia[100],
        size=0,
        count=0,
        dupl=0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Digite o elemento %d do vetor:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int j = 0; j < size; j++) {
            if (vetor[i] == vetor[j]) {
                count++;
                frequencia[j] = -1;
            }
        }
        if (count != 0) {
            frequencia[i] = count;
        }
    }

    for (int i = 0; i < size; i++) {
        if (frequencia[i] >= 2)
            dupl++;
    }

    printf("Total de numeros duplicados no array: %d\n", dupl);

    return 0;
}
