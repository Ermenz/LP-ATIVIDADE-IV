#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>


struct produto {

char nomeCaderno [200] = "caderno"
int quantidadeCaderno = 300;
float precoCaderno = 4;

char nomeComputador [200] = "computador"
int quantidadeComputador = 500;
float precoComputador = 300;

char nomeCama [200] = "cama"
int quantidadeCama = 300;
float precoCama = 25;
};


int compra (struct pruduto) {
	
	setlocale(LC_ALL, "portuguese");
		
  int quantidadeDesejada;
  char produtoDesejado [200];	
	
	printf("Digite o nome do produto que deseja comprar");
	gets(produtoDesejado);
	
	
	printf("Digite a quantidade que deseja comprar");
	scanf("%d", &quantidadeDesejada);
	
	if (produtoDesejado = "caderno") {
	   300 - quantidadeDesejada 
	}
	
	if (produtoDesejado = "computador") {
	   300 - quantidadeDesejada 
	}
	
	if (produtoDesejado = "cama") {
	   300 - quantidadeDesejada 
	} else {
		printf("produto inválido")
	}
	

  return quantidadeDesejada;
}



void estoque () {
  printf("Produto : %s", nomeCaderno);
  printf("Quantidade em estoque : %d", quantidadeCaderno);
  printf("Preço por unidade : %f", precoCaderno);


  printf("Produto : %s", nomeComputador);
  printf("Quantidade em estoque : %d", quantidadeComputador);
  printf("Preço por unidade :  %f", precoCComputador);
  
  
  
  printf("Produto : %s%s", nomeCama);
  printf("Quantidade em estoque : %d", quantidadeCama);
  printf("Preço por unidade :%f", precoCama);	
}











int main {

printf("Tabela\n");
printf("\n")
int numero;

do {

printf("1 - Realizar uma compra")
printf("2- Consultar estoque")
printf("3 - Sair do programa.")

printf("informe o que deseja fazer");
scanf("%d", &numero);

if (numero == 1) {
	compra(produto);
} if (numero == 2) {
	 estoque();
} if (nimero == 3){
	printf("Fechando programa");
}
     



w}while (numero != 3);












return 0;
}

