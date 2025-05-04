#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar um contato com nome e número
typedef struct {
    char nome[20];
    int numero;
} contato;

// Vetor dinâmico de contatos
contato *contatos = NULL;
int total_contatos = 0;

// Protótipos das funções
void menu();
void adicionar();
void buscar();
void listar();

int main() {
    system("cls"); // Limpa a tela (Windows)
    menu();        // Chama o menu principal
    return 0;
}

void menu() {
    int escolha;
    do {
        // Exibe as opções do menu
        printf("Agenda de contatos>>\n");
        printf("1- Adicionar um numero de telefone\n");
        printf("2- Buscar um numero salvo\n");
        printf("3- Exibir todos os numeros salvos\n");
        printf("4- Sair\n");
        scanf("%d", &escolha);

        while (getchar() != '\n'); // Limpa o buffer do teclado

        switch (escolha) {
        case 1:
            system("cls");
            adicionar(); // Chama função para adicionar contato
            printf("\n\n");
            break;
        case 2:
            system("cls");
            buscar();    // Chama função para buscar contato por número
            printf("\n\n");
            break;
        case 3:
            system("cls");
            listar();    // Exibe todos os contatos cadastrados
            printf("\n\n");
            break;
        case 4:
            printf("Saindo...\n");
            free(contatos); // Libera a memória alocada
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (escolha != 4); // Repete até o usuário escolher sair
}

void adicionar() {
    // Realoca espaço para mais um contato
    contato *cad = realloc(contatos, (total_contatos + 1) * sizeof(contato));
    if (cad == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    contatos = cad;

    // Recebe os dados do novo contato
    printf("\nNovo contato (%d):\n", total_contatos + 1);
    printf("Nome: ");
    scanf("%19s", contatos[total_contatos].nome); // Lê nome (máx 19 caracteres)
    printf("Numero: ");
    scanf("%d", &contatos[total_contatos].numero); // Lê número

    total_contatos++; // Atualiza total de contatos
    printf("Contato cadastrado com sucesso!\n");
}

void buscar() {
    if (total_contatos == 0) {
        printf("Nenhum contato salvo!\n");
        return;
    }

    int verificar;
    printf("Insira o numero que deseja buscar:\n");
    scanf("%d", &verificar);

    // Procura o número informado nos contatos
    for (int i = 0; i < total_contatos; i++) {
        if (contatos[i].numero == verificar) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Numero: %d\n", contatos[i].numero);
            return;
        }
    }
    printf("Contato nao encontrado!\n");
}

void listar() {
    if (total_contatos == 0) {
        printf("Nenhum contato na lista!\n");
        return;
    }

    // Exibe todos os contatos cadastrados
    printf("Lista de contatos salvos>>\n");
    for (int i = 0; i < total_contatos; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Numero: %d\n", contatos[i].numero);
    }
}
