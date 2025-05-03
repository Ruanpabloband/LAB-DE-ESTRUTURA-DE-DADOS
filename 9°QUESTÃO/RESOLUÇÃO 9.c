#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    int numero;
} contato;

contato *contatos = NULL;

void menu();
void adicionar();
void buscar();
void listar();

int total_contatos = 0;

int main()
{
    system("cls");
    menu();
    return 0;
}

void menu()
{
    int escolha;
    do
    {
        printf("Agenda de contatos>>\n");
        printf("1- Deseja adicionar um numero de telefone:\n");
        printf("2- Deseja buscar algum numero agendado:\n");
        printf("3- Deseja exibir todos os numeros agendados:\n");
        printf("4- Sair...\n");
        scanf("%d", &escolha);

        while (getchar() != '\n')
            ;

        switch (escolha)
        {
        case 1:
            system("cls");
            adicionar();
            printf("\n\n");
            break;
        case 2:
            system("cls");
            buscar();
            printf("\n\n");
            break;
        case 3:
            system("cls");
            listar();
            printf("\n\n");
            break;
        case 4:
            printf("Saindo...\n");
            free(contatos);
            break;
        default:
            printf("Satisfacao!!\n");
            break;
        }
    } while (escolha != 4);
}

void adicionar()
{
    contato *cad = realloc(contatos, (total_contatos + 1) * sizeof(contato));
    if (cad == NULL)
    {
        printf("Erro ao alocar memória!\n");
        return;
    }
    contatos = cad;

    printf("\nNovo contato (%d):\n", total_contatos + 1);

    printf("Nome: ");
    scanf("%19s", contatos[total_contatos].nome);

    printf("Numero: ");
    scanf("%d", &contatos[total_contatos].numero);

    total_contatos++;
    printf("Contato cadastrado com sucesso!\n");
}
void buscar()
{
    if (total_contatos == 0)
    {
        printf("Nenhum contato salvo!!\n");
        return;
    }

    int verificar;

    printf("Insira o numero que deseja buscar:\n");
    scanf("%d", &verificar);

    for (int i = 0; i < total_contatos; i++)
    {
        if (contatos[i].numero == verificar)
        {
            printf("\nContato encontrado:\n");
            printf("\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Numero: %d\n", contatos[i].numero);
            return;
        }
    }
    printf("Contato nao salvo!!\n");
}

void listar()
{
    if (total_contatos == 0)
    {
        printf("Nenhum contato na lista!!\n");
        return;
    }

    printf("Lista de contatos salvos>>\n");
    for (int i = 0; i < total_contatos; i++)
    {
        printf("Contato:%d\n", i + 1);
        printf("\n");
        printf("Nome: %s\n", contatos[i].nome);
        printf("Numero: %d\n", contatos[i].numero);
    }
}