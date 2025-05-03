#include <stdio.h> 

int main() {
    int vetnumber[10]; 
    int i, j;          
    int contado;       
        // Solicita ao usuário que digite 10 números inteiros
    printf("Informe 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetnumber[i]); // Lê os números digitados e armazena no vetor
    }

    printf("\nFrequencia de numeros contados:\n");

    // Loop externo percorre o vetor para verificar a frequência de cada número
    for (i = 0; i < 10; i++) {
        contado = 0; // Inicializa a variável 'contado' com 0 para cada novo número

        // Verifica se o número vetnumber[i] já apareceu antes no vetor
        for (j = 0; j < i; j++) {
            if (vetnumber[i] == vetnumber[j]) {
                contado = 1; // Se já apareceu, define contado como 1
                break;       // Encerra o loop, pois já sabemos que o número foi contado
            }
        }

        // Se 'contado' for 0, significa que o número ainda não foi processado
        if (!contado) {
            int cont = 1; 
            for (j = i + 1; j < 10; j++) {
                if (vetnumber[i] == vetnumber[j]) {
                    cont++;
                }
            }

            printf("%d aparece %d vez(es)\n", vetnumber[i], cont);
        }
    }

    return 0;
}
