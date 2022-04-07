#include <stdio.h>

/*
Exercício 1:
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor
do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve moestrar o valor da área do terreno,
bem como o valor do preço do terreno, ambos com duas casas decimais.

Largura do terreno: 10.0
Comprimento do terreno: 30.0
valor do metro quadrado: 200.00
área do terreno: 300.00
preço do terreno: 60.000,00
*/

int main (){
	
	//declarando as variáveis
	double largura, comprimento, valor, area, preco;
	//Solicitar o valor da largura
	printf("Digite a largura do terreno: ");
	//ler o valor da largura e guardar na variavel correspondente
	scanf("%lf", &largura);
	
	//Solicitar o valor da comprimento
	printf("Digite o comprimento do terreno: ");
	//ler o valor da largura e guardar na variavel correspondente
	scanf("%lf", &comprimento);
	
	//Solicitar o valor do metro quadrado
	printf("Digite o valor do metro quadrado do terreno: ");
	//ler o valor da largura e guardar na variavel correspondente
	scanf("%lf", &valor);
	
	//area do terreno
	area = largura * comprimento;
	//calculo preço do terreno
	preco = area* valor;
	
	//imprime na tela o resultado
	printf("Area do terreno = %.2lf\n", area);
	printf("Preco do terreno = %.2lf\n", preco);
	
	return 0;
}