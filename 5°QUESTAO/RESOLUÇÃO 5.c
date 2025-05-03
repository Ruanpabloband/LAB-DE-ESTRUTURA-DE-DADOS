#include <stdio.h>

int main()
{
    int vetA[5];
    int vetB[5];
    int i, j;

    /*Uso de uma estrutura de repetição para pedir ao usuario para digitar 5 valores a um vetor.*/
    printf("Insira os valores do vetor A:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetA[i]);
    }
    /*Uso de uma estrutura de repetição para pedir ao usuario para digitar 5 valores a um vetor.*/
    printf("Insira os valores do vetor B:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetB[i]);
    }
    for (i = 0; i < 5; i++)
    {
        /*Primero for para criar a variavel "contador", a mesma e inicializada em 0 pois vai receber valores depois*/
        int contador = 0;
        for (j = 0; j < 5; j++)
        {
            /*Estrutura para testa se tem valores que sao contidos no vet A, se estao no vet B */
            if (vetA[i] == vetB[j])
            {
                contador += 1;
            }
        }
        printf("Numero %d do vetor A aparece %d vezes no vetor B\n", vetA[i], contador);
    }

    return 0;
}