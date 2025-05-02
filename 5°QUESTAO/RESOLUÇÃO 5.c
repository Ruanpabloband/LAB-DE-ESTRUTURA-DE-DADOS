#include <stdio.h>

int main()
{
    int vetA[5];
    int vetB[5];
    int i, j;

    printf("Insira os valores do vetor A: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetA[i]);
    }
    printf("Insira os valores do vetor B: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetB[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int contador = 0;
        for (j = 0; j < 5; j++)
        {
            if (vetA[i] == vetB[j])
            {
                contador += 1;
            }
        }
        printf("Numero %d do vetor A aparece %d vezes no vetor B\n", vetA[i], contador);
    }

    return 0;
}