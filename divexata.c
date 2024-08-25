#include <stdio.h>
#include <locale.h>
/*Crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,d1;
	printf("informe um numerador: ");
	scanf("%d",&n1);
	printf("informe um denominador: ");
	scanf("%d",&d1);
	if(d1 != 0){
	if(n1 % d1 == 0){
	 	printf("É divisível!");
	}
	else{
		printf("Não é divisível!");
	}
	}
	else
	{
		   printf("O denominador deve ser diferente de zero.");
	}	
	return(0);
}