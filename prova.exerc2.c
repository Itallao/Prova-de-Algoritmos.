/*
  Tarefa PROVA-  Exercicio  2 (3 pontos) -   Fa�a um programa que crie um vetor de 10 posi��es com valores inteiros. 

          Receba todos os valores desse vetor. 

          Depois de preencher o vetor receba mais um valor inteiro e armazene em uma vari�vel.

          Mostre na tela a m�dia dos valores armazenado nesse vetor que est�o abaixo do valor armazenado na vari�vel:



Exemplo:

       Se o vetor armazenar os seguintes valores: 1,2,3,4,5,6,7,8,9,10

       Se o valor armazenado na vari�vel for 5.

       Imprimir: 2.5



       Ou seja, imprimir a m�dia dos valores armazenados no vetor abaixo de 5:



                                            (1 + 2 + 3 + 4)  / 4.0  = 2.5

 AUTHOR: ITALLO RODRIGUES MORENO
*/





/*
  Tarefa PROVA-  Exercicio 3-3 pontos)  Receba uma matriz de n�meros reais (float) com 5 linhas e 10 colunas. 

          Pe�a para o usu�rio digitar a posi��o de uma linha da matriz.

          Mostrar o somat�rio dos valores da linha digitada pelo usu�rio. 

          Se o usu�rio selecionar a primeira linha da matriz, mostrar o somat�rio de todos os valores da primeira linha. 

          Se o usu�rio selecionar a segunda linha da matriz, mostrar o somat�rio de todos os valores da segunda linha da matriz e assim 
		  sucessivamente.

 AUTHOR: ITALLO RODRIGUES MORENO
*/


#include <stdio.h>  
#include <locale.h> 


#define LEN 10

int main ()
{
		setlocale(LC_ALL, "Portuguese");
	
	int vet[LEN], i, value, soma,c ;
	float media;
	
	for(i=0; i < LEN; i++){
	printf("\nDigite um valor para vet[%i]: ", i);
	scanf("%i", &vet[0]);
	}
	
	
	printf("\n Digite um valor: ");
	scanf("%i", &value);
	
	for(i=0; i<LEN; i++){
		if(vet[i] < value){
			soma += vet[i];
			c += 1;
		}
	}
	
	media = ((float)soma / c);
	
	printf("media = %.2f", media );
	
	
	
	
	
	
	
	
	return 0; 	
	
}
	
	
