#include <stdio.h>

int main()
{
    int mat[4][4];
    int i, j;
    int soma = 0;

    /*Entrada de dados*/
    printf("Informe os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    /*Soma da diagonal principal*/
    for (i = 0; i < 4; i++)
    {
        soma += mat[i][i];
    }

    /*Exibição do resultado*/
    printf("Soma da diagonal principal = %d\n", soma);

    return 0;
}
