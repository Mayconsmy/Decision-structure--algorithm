#include <stdio.h>
#include <locale.h>
/*Crie um programa que solicita e l� dois n�meros
inteiros (numerador e denominador) e verifica se a divis�o � exata. Se for, exiba a
mensagem: �� divis�vel!�. Caso contr�rio, exiba a mensagem: �N�o � divis�vel!�.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,d1;
	printf("informe um numerador: ");
	scanf("%d",&n1);
	printf("informe um denominador: ");
	scanf("%d",&d1);
	if(d1 != 0){
	if(n1 % d1 == 0){
	 	printf("� divis�vel!");
	}
	else{
		printf("N�o � divis�vel!");
	}
	}
	else
	{
		   printf("O denominador deve ser diferente de zero.");
	}	
	return(0);
}