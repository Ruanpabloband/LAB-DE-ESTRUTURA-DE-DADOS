#include <stdio.h>

/* Função de busca binária*/
int buscaBinaria(int vetor[], int tamanho, int chave) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == chave) {
            return meio; /*Encontrou o elemento*/
        } else if (vetor[meio] < chave) {
            inicio = meio + 1; /* Procura na metade direita*/
        } else {
            fim = meio - 1; /* Procura na metade esquerda*/
        }
    }

    return -1; /* Não encontrou*/
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave = 10;

    int resultado = buscaBinaria(vetor, tamanho, chave);

    if (resultado != -1) {
        printf("Elemento %d encontrado na posição %d.\n", chave, resultado);
    } else {
        printf("Elemento %d não encontrado no vetor.\n", chave);
    }

    return 0;
}
