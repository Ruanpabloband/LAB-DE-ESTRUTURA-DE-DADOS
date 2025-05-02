#include <stdio.h>

/*Criar um função para calcular a potencia, do tipo inteira, com os parâmetros
base e expoente.*/

int potencia(int base, int expoente)
{
    /*Criar uma variavel result que recebe 1, para receber o resultado final.*/
    int result = 1;
    /*Estrutura de repetição para o contador "i" ir de 0 ate o expoente, onde vai ser multiplicado por cada valor da base*/
    for (int i = 0; i < expoente; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int base, expoente, resultado;
    /*Informar a base com o expoente*/
    printf("Informe a base: \n");
    printf("Informe o expoente: \n");
    scanf("%d%d", &base, &expoente);
    /*Utilizar uma variavel para receber a função*/
    resultado = potencia(base, expoente);

    printf("RESULTADO: %d\n", resultado);
    return 0;
}