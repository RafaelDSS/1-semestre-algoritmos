#include <stdio.h>


int maior(int tamanho, int *vetor);

int main() {
    int vetor[50],
        tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("O maior valor do vetor e: %d\n", maior(tamanho, vetor));

    return 0;

}

int maior(int tamanho, int *vetor) {
    int valor, maior=0;

    for (int i = 0; i < tamanho; i++) {
        valor = vetor[i];

        if (valor > maior)
            maior = valor;
    }
    return maior;
}
