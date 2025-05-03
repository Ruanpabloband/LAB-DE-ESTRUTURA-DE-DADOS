#include <stdio.h>

/*Crição de um registro "aluno", como uma variavel nome do tipo char, a variavel matricula do tipo inteira, as variaveis notas e media do tipo float */
struct aluno
{
    char nome[20];
    int matricula;
    float notas[3];
    float media;
};

int main()
{

    int quanti;

    printf("Insira a quantidade de Alunos>\n");
    scanf("%d", &quanti);

/*A chamada do registro com a quantidade de alunos!!*/
    struct aluno alunos[quanti];

    /*Um vetor para contar ler os nomes, matricula, notas e calcular a media, que se inicia em 0 e vai ate a quantidade informada pelo usuario!!*/
    for (int i = 0; i < quanti; i++)
    {
        printf("Informe seu nome: \n");
        scanf("%s", alunos[i].nome);

        printf("Informe o numero de sua matricula: \n");
        scanf("%d", &alunos[i].matricula);

        /*Vetor para calcular a media, e a criação da variavel soma!!*/
        float soma = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Informe suas 3 notas: \n");
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / 3;
    }

    /*Vetor para informar todos os dados preenchidos pelo ususario!!*/
    for (int i = 0; i < quanti; i++)
    {
        printf("\nDados do Aluno %d:\n", i+1);
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Numero da matricula: %d\n", alunos[i].matricula);  // Removi o &
        printf("Media = %.2f\n", alunos[i].media);
    }

    return 0;
}