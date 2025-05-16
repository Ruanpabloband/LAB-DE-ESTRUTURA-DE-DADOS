#include <stdio.h>
#include <string.h>

int main (){
char palavra[100];
int tamanho;
int palindromo = 1;
printf("Informe a palavra para ser verificada:\n");
scanf("%s", palavra );

/*Uso da função da biblioteca string.h, onde o strlen ler o tamanho da variavel digitada pelo usuario.*/
tamanho = strlen(palavra);

/*Uso de uma estrutura de repetição para testar se um numero e palindromo ou nao. */
for (int i = 0; i < tamanho / 2; i++){
if (palavra[i] != palavra[tamanho - i - 1]) {
            palindromo = 0; /*Nao palindromo.*/
            break; /*Sai do loop ao achar uma diferença.*/
        }
}

if (palindromo)
{
    printf("E palindromo!");
}
else{
    
    printf("Nao palindromo!");
}

return 0;
}