/*
  Tarefa PROVA-  Exercicio  2 (3 pontos) -   Faça um programa que crie um vetor de 10 posições com valores inteiros. 

          Receba todos os valores desse vetor. 

          Depois de preencher o vetor receba mais um valor inteiro e armazene em uma variável.

          Mostre na tela a média dos valores armazenado nesse vetor que estão abaixo do valor armazenado na variável:



Exemplo:

       Se o vetor armazenar os seguintes valores: 1,2,3,4,5,6,7,8,9,10

       Se o valor armazenado na variável for 5.

       Imprimir: 2.5



       Ou seja, imprimir a média dos valores armazenados no vetor abaixo de 5:



                                            (1 + 2 + 3 + 4)  / 4.0  = 2.5

 AUTHOR: ITALLO RODRIGUES MORENO
*/





/*
  Tarefa PROVA-  Exercicio 3-3 pontos)  Receba uma matriz de números reais (float) com 5 linhas e 10 colunas. 

          Peça para o usuário digitar a posição de uma linha da matriz.

          Mostrar o somatório dos valores da linha digitada pelo usuário. 

          Se o usuário selecionar a primeira linha da matriz, mostrar o somatório de todos os valores da primeira linha. 

          Se o usuário selecionar a segunda linha da matriz, mostrar o somatório de todos os valores da segunda linha da matriz e assim 
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
	
	
