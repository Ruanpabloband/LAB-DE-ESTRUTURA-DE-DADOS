#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*Função para calcular se o numero e primo, utilizando true or false. */
bool primo(int Ninteiro)
{
    if (Ninteiro <= 1)
        return false;

    if (Ninteiro == 2)
        return true;

    if (Ninteiro % 2 == 0)
        return false;

    /*Testando cada valor para saber se e primo ou nao.*/
    int raiz = sqrt(Ninteiro);
    for (int i = 3; i <= raiz; i += 2)
    {
        if (Ninteiro % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int numint;

    /*Pedir ao usuario para digitar um numero.*/
    printf("Informe um numero inteiro: \n");
    scanf("%d", &numint);

    /*Teste para digitar um numero menor ou igual a 0*/
    if (numint <= 0)
    {
        printf("Opcao invalida!!\n");
    }

    else if (primo(numint))
    {
        printf("%d e primo", numint);
    }
    else
    {
        printf("%d nao e primo", numint);
    }
    return 0;
}