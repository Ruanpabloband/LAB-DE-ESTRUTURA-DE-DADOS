#include <stdio.h>

/*Função para inverte os numeros digitados no main*/
void inverterNUM(int vet[4])
{
    /*Uso de uma estrutura de repetição onde a mesma  vai decrementar os valores.*/
    for (int i = 3; i >= 0; i--)
    {
        printf("Ordem inversa: %d\n", vet[i]);
    }
}

int main()
{
    int vet[4], i;

    printf("Informe 4 numeros: \n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &vet[i]);
    }

    inverterNUM(vet);

    return 0;
}