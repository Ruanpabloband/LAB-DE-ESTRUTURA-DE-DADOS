#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 0)
        return 0;       // Caso base: F(0) = 0
    else if (n == 1)
        return 1;       // Caso base: F(1) = 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Chamada recursiva
}

int main() {
    int n;
    printf("Digite a posicao n: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("Fibonacci(%d) = %d\n", n, resultado);

    return 0;
}
