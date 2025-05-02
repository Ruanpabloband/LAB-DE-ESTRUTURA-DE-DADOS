#include <stdio.h>
int main()
{

    int matA[3][3];
    int matB[3][3];
    int soma[3][3];
    int i, j;

    printf("Insira os valores da matriz A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Insira os valores da matriz B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    printf("Soma das matrizes> \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d\t", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}