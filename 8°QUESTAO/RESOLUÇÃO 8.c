/*8. **Estoque Simples**
Crie uma `struct Produto` com nome, código, quantidade e preço. Permita cadastrar, buscar e listar produtos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    int codigo;
    int quantidade;
    float preco;
} produto;

produto *Produtos = NULL;
int total_produtos = 0;

void cadastrar();
void buscar();
void listar();
void menu();

int main()
{
    system ("cls");
    menu();
    return 0;
}

void menu()
{
    int n;
    do
    {
        printf("Escolha uma opcao: \n");
        printf("1- Cadastrar um produto??\n");
        printf("2- Buscar produto??\n");
        printf("3- Listar produto??\n");
        printf("4- Sair??\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            system ("cls");
            cadastrar();
            break;
        case 2:
        system ("cls");
            buscar();
            break;
        case 3:
        system ("cls");
            listar();
        break;
        case 4:
                printf("Saindo...!\n");
                free(Produtos);
                break;
        default:
            printf("Obrigado pela preferencia!!\n");
            break;
        }
    } while (n != 4);
}

void cadastrar()
{

    produto *temp = realloc(Produtos, (total_produtos + 1) * sizeof(produto));
    if (temp == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return;
    }
    Produtos = temp;

    printf("\nCadastro de Produto %d\n", total_produtos + 1);
    printf("Nome: ");
    getchar(); 
    fgets(Produtos[total_produtos].nome, sizeof(Produtos[total_produtos].nome), stdin);
    Produtos[total_produtos].nome[strcspn(Produtos[total_produtos].nome, "\n")] = '\0';
    printf("Codigo: ");
    scanf("%d", &Produtos[total_produtos].codigo);
    printf("Quantidade: ");
    scanf("%d", &Produtos[total_produtos].quantidade);
    printf("Preco: ");
    scanf("%f", &Produtos[total_produtos].preco);

    total_produtos++;
    printf("Produto cadastrado com sucesso!\n");
}

void buscar()
{
    if (total_produtos == 0)
    {
        printf("Nenhum produto!!\n");
        return;
    }

    int cod_verificar;

    printf("Insira o codigo do produto:\n");
    scanf("%d", &cod_verificar);

    for (int i = 0; i < total_produtos; i++)
    {
        if (Produtos[i].codigo == cod_verificar)
        {
            printf("Produto encontrado!!\n");
            printf("Nome: %s\n", Produtos[i].nome);
            printf("Codigo: %d\n", Produtos[i].codigo);
            printf("Preco: %.2f $\n", Produtos[i].preco);
            printf("Quantidade: %d\n", Produtos[i].quantidade);
            return;
        }
    }
    printf("Produto nao encontrado!!\n");
}

void listar(){

if (total_produtos == 0)
{
    printf("Nenhum produto cadastrado!!\n");
}

printf("\nLista de Produtos:\n");
    for (int i = 0; i < total_produtos; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: %s\n", Produtos[i].nome);
        printf("Codigo: %d\n", Produtos[i].codigo);
        printf("Quantidade: %d\n", Produtos[i].quantidade);
        printf("Preco: %.2f $\n", Produtos[i].preco);
    }

}