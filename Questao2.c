#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

#define quantidade  5
#define contador 2


// ---------DECLARAÇÃO DE VÁRIAVEIS--------

struct dados {

char nome [100];
char dataNascimento  [100];
float Nota [2];
float Media;
};

// ------------Operação de ddados-----------

float CalcularMedia (struct dados aluno []) {

    setlocale(LC_ALL, "portuguese");  
    
int i;
int j;
float SomaNota = 0;
float Media[5];


 for ( i = 0; i < quantidade; i++)
{
	
for (j = 0; j < contador; j++ )  {
    SomaNota+= aluno[i].Nota[j]; 
}
  aluno[i].Media = SomaNota/(float)contador;  
  SomaNota = 0;
 }
 return aluno[i].Media;
                                         }
                                         
 //------------------------------------------
 
 
  //--------------VERIFICAÇÃO DE APROVAÇÃO---------------         
  
                       
float verificacao(struct dados aluno[]) {
	
	int i;
	float Media;
	char Resultado[100];
	
	
	for (i = 0; i < quantidade; i++) {
	if (aluno[i].Media >= 7) {
	strcpy(Resultado, "Aluno aprovado");
	} else {		
	strcpy(Resultado, "Aluno reprovado");
	}
		printf("Resultado: %s\n", Resultado);  	
}     
      	  
                         
 }                                         
          
void limpatela()
{
    fflush(stdin);
    system("cls || clear");
}		  
		  
		 		                                 
                                
//--------Recebimento de dados------------
int main () {	
int i;
int j = 0;
int SomaNota = 0;
char Resultado [100];


    setlocale(LC_ALL, "portuguese");

struct dados aluno[5];

 for ( i = 0; i < quantidade; i++)
 {
  
    printf("Informe o nome do %dº aluno: \n", i + 1);
    gets(aluno[i].nome);

    printf("Informe a data de nascimento do %dº aluno: \n", i + 1);
    gets(aluno[i].dataNascimento);

  for (j =0; j < contador; j++ )  {

    printf("Informe a %dº nota: \n", j + 1);
    scanf("%f", &aluno[i].Nota[j]);  

   }
       fflush(stdin);   
       
     limpatela();      
  }
 
 
  for (i = 0; i < quantidade; i++)
    {

        printf("Nome do %d° aluno: %s \n", i + 1, aluno[i].nome);
        printf("Data de nascimento do %d° aluno: %s\n", i + 1, aluno[i].dataNascimento);

        for (j = 0; j < contador; j++)
        {
            printf("%d° Nota do %d° aluno: %.2f\n", j + 1, i + 1, aluno[i].Nota[j]);
        }
        
        
        CalcularMedia(aluno);// FUNÃO MEDIA

        printf("Média do %d° aluno: %.2f\n", i + 1,aluno[i].Media);
        printf("\n");
    }

   verificacao(aluno);// FUNÇÃO VERIFICAR APROVAÇÃO
 
 
 
 
 
    return 0;
}
