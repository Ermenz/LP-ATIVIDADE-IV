#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>




struct funcionario {
	
	char nome[100];
	char cargo[100];
	float salario;
	float media;
	int quantidadefuncionario;

};




float media(struct funcionario dados[], int quantidade){
	
    int i;
	float media;
	float somaSalario = 0;
	
	for(i = 0; i < quantidade; i++){
	  	somaSalario += dados[i].salario;
	  	
	}
    
	
	return somaSalario / quantidade;
}


int main () {
	
	setlocale(LC_ALL, "portuguese");
	
  float somaSalario = 0;
	
 
  int i;	
  int j;
  char cargo[100];
  int quantidadeFuncionarios;

	
	
	printf("Informe a quantidade de funcionário");	
      scanf("%d", &quantidadeFuncionarios);	
	
	
	struct funcionario dados[quantidadeFuncionarios];
	
     	 fflush(stdin);	
     	 
	printf("Informe o cargo desses funcionários");	
    gets(cargo);
	
	 	printf("\n");
	
	for(i = 0; i < quantidadeFuncionarios; i++){
		
	   fflush(stdin);
		
		printf("Informe o nome do %d funcionario", i + 1);
		gets(dados[i].nome);
			
		printf("Informe o salário do %d funcionario", i + 1);
		scanf("%f", &dados[i].salario);
        
       	printf("\n");
        	fflush(stdin);
		
	}
	
	
 
          float resultadoMedia = media(dados, quantidadeFuncionarios);  

	 
	
	 
	    printf("Os funcionários com o cargo de %s\n", cargo);
		printf("Media Salarial dos funcionários deste cargo é de  %.2f", resultadoMedia);
	
	
	return 0;
}






