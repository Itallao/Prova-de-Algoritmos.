/*
  Tarefa 15-  Exercicio 5 - Fa�a um programa que recebe uma matriz 3x4 e mostra a soma dos elementos de uma linha escolhida pelo usu�rio.

 AUTHOR: ITALLO RODRIGUES MORENO
*/








#include <stdio.h>  
#include <locale.h> 

#define L 5
#define C 10

int main ()
{
	setlocale(LC_ALL, "Portuguese");
  	
	int  lin, col,  linha;
	float M[L][C], soma=0;	
	

	for(lin=0; lin < L; lin++){
		for(col=0;  col < C; col++){
			printf("Digite um valor para [%i][%i]: ", lin, col);
			scanf("%f", &M[lin][col]);	
		}	
	}
	
	printf("\n Digite a linha da Matriz: ");
	scanf("%i", &linha);
	
		for(col=0; col<C; col++){
			soma+= M[linha][col];
			
			}
			
			
			printf("\nA soma da linha �: %.2f", soma);
	
	return 0;	


}
