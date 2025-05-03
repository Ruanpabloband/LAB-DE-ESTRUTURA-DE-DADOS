#include <stdio.h>
int main()
{

    /*Criação das variaveis que são composts por 2 vetores, que são matrizes*/
    int matA[3][3];
    int matB[3][3];
    int soma[3][3];
    int i, j;

    /*Uso de 2 vetores para receber os valores inseridos para linhas e colunas da matriz!!*/
    printf("Insira os valores da matriz A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    /*Uso de 2 vetores para receber os valores inseridos para linhas e colunas da matriz!!*/
    printf("Insira os valores da matriz B: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    /*Aqui e feito a soma das matrizes, onde a varialvel soma tem dois vetores onde recebe a soma da matriz A e matriz B!!*/
    printf("Soma das matrizes> \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma[i][j] = matA[i][j] + matB[i][j];
        }
    }

    /*Aqui e onde imprimo o resultado com duas estruturas de repetição, utilizando "i" e "j".*/
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