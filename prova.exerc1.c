/*
  Tarefa PROVA-  Exercicio  1(4 pontos)  Faça um programa que receba um número inteiro, enquanto esse número digitado por maior que o último número 
  digitado E maior do que zero. 
          Para cada número digitado válido mostre se ele é múltiplo de 2, 3 ou 5. 

          Ao finalizar a aplicação imprimir “FIM”.



Exemplo 1:

               Digite um número: 0

               FIM





Exemplo 2:

              Digite um número: 4

                            4 é múltiplo de 2.

              Digite um número: 10

                            10 é múltiplo de 2.

                            10 é múltiplo de 5.

              Digite um número: 13

              Digite um número: 10

              FIM

 AUTHOR: ITALLO RODRIGUES MORENO
*/




#include <stdio.h>  
#include <locale.h> 

int main()
{

	setlocale(LC_ALL, "Portuguese");


	int i,n;

	
	
	for(i=0; n > 0 ; i++ ){
	
	
	printf("\n\n Informe um numero inteiro: ");
		scanf ("%i",&n);
	
	
	 
	
	if(n%2==0 && n != 0 ){
	 	printf("\n é múltiplo de 2");
	 	}
	
	  if(n%3==0 && n != 0 ){
		printf("\n é múltiplo de 3");
		} 	
	
		if (n%5==0 && n != 0 ){
		printf("\n é múltiplo de 5" );
		}	
	
	if(n==0){
		printf("\n FIM.");
	}
		
	}
	
		
	
		

		
		
		
    


	return 0;
}
	
