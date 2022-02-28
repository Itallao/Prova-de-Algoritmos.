/*

O dono de uma loja precisa saber a margem de lucro que ele tem dos produtos vendidos durante o dia.
Ele usa a seguinte estratégia para definir o preço de um produto.

Se o preço custo do produto for menor que R$ 10,00,  a margem de lucro é de 5%.
Por exemplo: Se o custo de um produto for de R$ 2,00, o produto é vendido por R$ 2,10


Se o preço custo do produto for de R$ 10,00 até R$ 100,00 (inclusive), a margem de lucro é de 10%.
Por exemplo: Se o custo de um produto for de R$ 42,00, o produto é vendido por R$ 46,20.

Se o preço custo do produto for maior do que R$ 100,00, a margem de lucro é de 15%.
Por exemplo: Se o custo de um produto for de R$ 123,00, o produto é vendido por R$ 141,45.


Nesse programa o dono da loja insere os preços de cada venda e o programa finaliza quando o preço de venda for 0.

No final, quando o dono da loja digitar 0 (zero), mostrar:

Lucro dos produtos com margem de 5%.
Lucro dos produtos com margem de 10%.
Lucro dos produtos com margem de 15%.
Lucro Total


Exemplo de execução:

Digite o valor da venda ou zero para sair:  2.10
Digite o valor da venda ou zero para sair:  46.20
Digite o valor da venda ou zero para sair:  141.45
Digite o valor da venda ou zero para sair:  0

Lucro 5%:        R$ 0.10
Lucro 10%:      R$ 4.20
Lucro 15%       R$ 18.45
Lucro Total:     R$ 22.75

Author: Itallo Rodrigues Moreno

*/
 
 
 
 
#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
    float value_product, value, margem5, result_margem5, margem10, result_margem10, margem15, result_margem15;
    
 	
 	
    do{
	
	printf("Digite o valor da venda ou zero para sair:	");
    scanf("%f", &value_product);

	if(value_product <= 10){
		value =  value_product /1.05;
		 margem5 = value * 0.05;
		 result_margem5 += margem5 ;
	}
	
	else if(  value_product<=100){
	
		value =  value_product / 1.1;
		margem10 = value * 0.1;
		 result_margem10 +=  margem10;
	}
	
	else{
		value =  value_product/ 1.15;
		margem15 = value * 0.15;
		result_margem15 += margem15;
	}
	
		
	}while( value_product != 0 );
	

		
	printf("\nLucro de 5%%: R$ %.2f",	result_margem5 );
	printf("\nLucro 10%%:  	R$ %.2f",	result_margem10);	
	printf("\nLucro 15%%:  	R$ %.2f", 	result_margem15  );
	printf("\nLucro Total: 	R$ %.2f",	result_margem5 + result_margem10 + result_margem15  );
		
	
		

    
	return 0;	
   
}
	
