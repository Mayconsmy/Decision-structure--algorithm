#include <stdio.h>
#include <locale.h>
/*Crie um programa que simule uma calculadora simples, ou seja, que efetua as
quatro opera��es b�sicas da matem�tica (adi��o, subtra��o, multiplica��o e divis�o)
para dois valores reais fornecidos pelo usu�rio. O programa deve exibir as op��es
ao usu�rio e efetuar uma delas, conforme a op��o digitada pelo usu�rio. Para isso,
utilize a estrutura SWITCH.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1;
	float r1,r2;	
	printf("*****CALCULADORA SIMPLES***** \n");
	printf("1 - Adi��o \n");
	printf("2 - Subtra��o \n");
	printf("3 - Multiplica��o \n");
	printf("4 - Divis�o \n");
	printf("**************************** \n");
	printf("INFORME  A OPERA��O: ");
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
			printf("Op��o Incorreta.");
	}
	return (0);
}