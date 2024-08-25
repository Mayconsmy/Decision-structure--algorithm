#include <stdio.h>
#include <locale.h>
/*Crie um programa que simule uma calculadora simples, ou seja, que efetua as
quatro operações básicas da matemática (adição, subtração, multiplicação e divisão)
para dois valores reais fornecidos pelo usuário. O programa deve exibir as opções
ao usuário e efetuar uma delas, conforme a opção digitada pelo usuário. Para isso,
utilize a estrutura SWITCH.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1;
	float r1,r2;	
	printf("*****CALCULADORA SIMPLES***** \n");
	printf("1 - Adição \n");
	printf("2 - Subtração \n");
	printf("3 - Multiplicação \n");
	printf("4 - Divisão \n");
	printf("**************************** \n");
	printf("INFORME  A OPERAÇÃO: ");
	scanf("%d",&n1);
	printf("Informe o primeiro Valor: ");
	scanf("%f",&r1);
	printf("Informe o segundo Valor: ");
	scanf("%f",&r2);
	switch(n1){
		case 1:
			printf("Resultado = %.2f",r1 + r2);
			break;
		case 2:
			printf("Resultado = %.2f", r1 - r2);
			break;
		case 3:
			printf("Resultado = %.2f", r1 * r2);
			break;
		case 4:
			if(r2 != 0){
				printf("Resultado = %.2f", r1 / r2);	
			}
			else
			{
				printf("O denominador deve ser diferente de 0");
			}
			break;
		default:
			printf("Opção Incorreta.");
	}
	return (0);
}