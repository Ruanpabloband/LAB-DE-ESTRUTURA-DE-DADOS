#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um produto
typedef struct
{
    char nome[20];
    int codigo;
    int quantidade;
    float preco;
} produto;

// Vetor dinâmico de produtos e contador total
produto *Produtos = NULL;
int total_produtos = 0;

// Protótipos das funções
void cadastrar();
void buscar();
void listar();
void menu();

int main()
{
    system("cls"); // Limpa a tela (Windows)
    menu();        // Chama o menu principal
    return 0;
}

void menu()
{
    int n;
    do
    {
        // Menu de opções
        printf("Escolha uma opcao: \n");
        printf("1- Cadastrar um produto\n");
        printf("2- Buscar produto\n");
        printf("3- Listar produtos\n");
        printf("4- Sair\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            system("cls");
            cadastrar(); // Cadastra novo produto
            break;
        case 2:
            system("cls");
            buscar(); // Busca produto pelo código
            break;
        case 3:
            system("cls");
            listar(); // Lista todos os produtos
            break;
        case 4:
            printf("Saindo...\n");
            free(Produtos); // Libera memória alocada
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (n != 4); // Continua até o usuário escolher sair
}

void cadastrar()
{
    // Realoca memória para mais um produto
    produto *temp = realloc(Produtos, (total_produtos + 1) * sizeof(produto));
    if (temp == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    Produtos = temp;

    // Recebe os dados do produto
    printf("\nCadastro de Produto %d\n", total_produtos + 1);
    printf("Nome: ");
    getchar(); // Limpa o buffer
    fgets(Produtos[total_produtos].nome, sizeof(Produtos[total_produtos].nome), stdin);
    Produtos[total_produtos].nome[strcspn(Produtos[total_produtos].nome, "\n")] = '\0'; // Remove '\n'

    printf("Codigo: ");
    scanf("%d", &Produtos[total_produtos].codigo);
    printf("Quantidade: ");
    scanf("%d", &Produtos[total_produtos].quantidade);
    printf("Preco: ");
    scanf("%f", &Produtos[total_produtos].preco);

    total_produtos++; // Aumenta o contador
    printf("Produto cadastrado com sucesso!\n");
}

void buscar()
{
    if (total_produtos == 0)
    {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    int cod_verificar;
    printf("Insira o codigo do produto: ");
    scanf("%d", &cod_verificar);

    // Procura o produto pelo código
    for (int i = 0; i < total_produtos; i++)
    {
        if (Produtos[i].codigo == cod_verificar)
        {
            printf("Produto encontrado!\n");
            printf("Nome: %s\n", Produtos[i].nome);
            printf("Codigo: %d\n", Produtos[i].codigo);
            printf("Preco: %.2f $\n", Produtos[i].preco);
            printf("Quantidade: %d\n", Produtos[i].quantidade);
            return;
        }
    }
    printf("Produto nao encontrado!\n");
}

void listar()
{
    if (total_produtos == 0)
    {
        printf("Nenhum produto cadastrado!\n");
        return;
    }

    // Mostra todos os produtos cadastrados
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < total_produtos; i++)
    {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", Produtos[i].nome);
        printf("Codigo: %d\n", Produtos[i].codigo);
        printf("Quantidade: %d\n", Produtos[i].quantidade);
        printf("Preco: %.2f $\n", Produtos[i].preco);
        printf("\n");
    }
}
