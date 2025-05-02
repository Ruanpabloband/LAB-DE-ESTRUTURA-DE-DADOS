#include <stdio.h>

int main() {
    int vetnumber[10];
    int i, j;
    int contado;

    printf("Informe 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetnumber[i]);
    }

    printf("\nFrequencia de numeros contados:\n");
    for (i = 0; i < 10; i++) {
        contado = 0;

        for (j = 0; j < i; j++) {
            if (vetnumber[i] == vetnumber[j]) {
                contado = 1;
                break;
            }
        }

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
