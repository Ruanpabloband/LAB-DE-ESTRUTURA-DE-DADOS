#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Função que verifica se um número é primo
bool ehPrimo(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int inicio, fim;

    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o segundo numero do intervalo: ");
    scanf("%d", &fim);

    // Troca se o início for maior que o fim
    if (inicio > fim)
    {
        int temp = inicio;
        inicio = fim;
        fim = temp;
    }

    /*Vetor para listar os numeros entre o intervalo entre o inicio e o fim!!*/
    printf("Numeros primos entre %d e %d:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++)
    {
        if (ehPrimo(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}