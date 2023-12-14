#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct ContaBancaria {
	
char numero_Conta[101];
  char nome_Titular[101];
  char tipo_Conta[101];	
  float saldo;
};



float conta (struct ContaBancaria Dados) {

setlocale(LC_ALL, "portuguese");

int opcao = 3;
float deposito;
float saque;
  float somaDeposito = 0;
  
printf("SEU SALDO ATUAL É ZERO");
printf("\n");


printf("1 - DEPOSITAR\n");
printf("2 - SACAR\n");
printf("3 - SAIR DO PROGRAMA\n");

printf("\n");


do  {
	
printf("O QUE DESEJA FAZER?\n");
scanf("%d", &opcao);	


if (opcao == 1){
   printf("Informe o valor que deseja depositar\n");
   scanf("%f", &deposito);
    somaDeposito+=deposito;    
} 
if (opcao == 2) {
	 printf("Informe o valor que deseja sacar\n");
   scanf("%f", &saque);
     somaDeposito -= saque;
} 

if (opcao == 3) {
	printf("Fechando programa\n");
}

printf("\n");

}while(opcao != 3);

 printf("Seu saldo final é %.2f", somaDeposito);
    
    
  return somaDeposito;
}




int main (){
	
  
	
	setlocale(LC_ALL, "portuguese");
	
	
	struct ContaBancaria Dados;
	
	
  printf("Informe o número da sua conta");
  gets(Dados.numero_Conta);	
	
  printf("Informe o nome do titular");
  gets(Dados.nome_Titular);		
	
   printf("Informe o tipo de conta");
   gets(Dados.tipo_Conta);	
	
	conta(Dados);
	
	
	
	
	return 0;
}




