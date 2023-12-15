#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>


// Struct para entrada de produtos
struct Produto {
    char nome[200];
    int quantidade;
    float preco;
};


// struct para determinar a quantidade de produtos e o preço deles
struct Produto caderno = {"Caderno", 300, 4};
struct Produto computador = {"Computador", 500, 300};
struct Produto cama = {"Cama", 300, 25};


// função  para a entrada de produtos 
int compra(struct Produto *produto) {
    setlocale(LC_ALL, "portuguese");

    char produtoDesejado[200];
    int quantidadeDesejada;

    printf("Digite o nome do produto que deseja comprar: ");
    scanf("%s", produtoDesejado);

    printf("Digite a quantidade que deseja comprar: ");
    scanf("%d", &quantidadeDesejada);


// validação do produto que deseja comprar
    if (strcmp(produtoDesejado, "caderno") == 0) {
        if (quantidadeDesejada <= caderno.quantidade) {
            caderno.quantidade -= quantidadeDesejada;
            printf("Compra realizada\n");
        } else {
            printf("Quantidade no estoque insuficiente\n");
        }
    } else if (strcmp(produtoDesejado, "computador") == 0) {
        if (quantidadeDesejada <= computador.quantidade) {
            computador.quantidade -= quantidadeDesejada;
            printf("Compra realizada \n");
        } else {
            printf("Quantidade no estoque insuficiente\n");
        }
    } else if (strcmp(produtoDesejado, "cama") == 0) {
        if (quantidadeDesejada <= cama.quantidade) {
            cama.quantidade -= quantidadeDesejada;
            printf("Compra realizada \n");
        } else {
            printf("Quantidade no estoque insuficiente\n");
        }
    } else {
        printf("Produto inválido\n");
    }

    return quantidadeDesejada;
}

// Função void com os dados dos produtos registrados
void estoque() {
	  setlocale(LC_ALL, "portuguese");
	
    printf("Produto: %s\n", caderno.nome);
    printf("Quantidade em estoque: %d\n", caderno.quantidade);
    printf("Preço por unidade: %.2f\n\n", caderno.preco);

    printf("Produto: %s\n", computador.nome);
    printf("Quantidade em estoque: %d\n", computador.quantidade);
    printf("Preço por unidade: %.2f\n\n", computador.preco);

    printf("Produto: %s\n", cama.nome);
    printf("Quantidade em estoque: %d\n", cama.quantidade);
    printf("Preço por unidade: %.2f\n\n", cama.preco);
}

int main() {
    int numero;

     
   
    do {
    	
        printf("--------------Tabela------------\n");
        printf("\n");
        printf("1 - Realizar uma compra\n");
        printf("2 - Consultar estoque\n");
        printf("3 - Sair do programa\n");
        printf("----------------------------------\n")

        printf("Informe o que deseja fazer: ");
        scanf("%d", &numero);

        if (numero == 1) {
            compra(&caderno); 
                compra(&cama); 
                 compra(&computador); 
            
        } else if (numero == 2) {
            estoque();
        } else if (numero == 3) {
            printf("Fechando programa\n");
        } else {
            printf("Opção inválida\n");
        }
    } while (numero != 3);

    return 0;
}







