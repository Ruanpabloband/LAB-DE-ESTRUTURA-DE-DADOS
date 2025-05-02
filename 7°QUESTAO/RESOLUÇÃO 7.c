#include <stdio.h>

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

    struct aluno alunos[quanti];

    for (int i = 0; i < quanti; i++)
    {
        printf("Informe seu nome: \n");
        scanf("%s", alunos[i].nome);

        printf("Informe o numero de sua matricula: \n");
        scanf("%d", &alunos[i].matricula);

        float soma = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("Informe suas 3 notas: \n");
            scanf("%f", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }
        alunos[i].media = soma / 3;
    }

    for (int i = 0; i < quanti; i++)
    {
        printf("\nDados do Aluno %d:\n", i+1);
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Numero da matricula: %d\n", alunos[i].matricula);  // Removi o &
        printf("Media = %.2f\n", alunos[i].media);
    }

    return 0;
}