/*
  Tarefa PROVA-  Exercicio  1(4 pontos)  Fa�a um programa que receba um n�mero inteiro, enquanto esse n�mero digitado por maior que o �ltimo n�mero 
  digitado E maior do que zero. 
          Para cada n�mero digitado v�lido mostre se ele � m�ltiplo de 2, 3 ou 5. 

          Ao finalizar a aplica��o imprimir �FIM�.



Exemplo 1:

               Digite um n�mero: 0

               FIM





Exemplo 2:

              Digite um n�mero: 4

                            4 � m�ltiplo de 2.

              Digite um n�mero: 10

                            10 � m�ltiplo de 2.

                            10 � m�ltiplo de 5.

              Digite um n�mero: 13

              Digite um n�mero: 10

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
	 	printf("\n � m�ltiplo de 2");
	 	}
	
	  if(n%3==0 && n != 0 ){
		printf("\n � m�ltiplo de 3");
		} 	
	
		if (n%5==0 && n != 0 ){
		printf("\n � m�ltiplo de 5" );
		}	
	
	if(n==0){
		printf("\n FIM.");
	}
		
	}
	
		
	
		

		
		
		
    


	return 0;
}
	
