#include <stdio.h>
#include <locale.h>
/*Escreva um programa que solicita e l� um valor inteiro e informa se ele � positivo,
negativo ou neutro.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("informe um valor inteiro: ");
	scanf("%d",&x);
	if (x > 0){
	  	printf("o n�mero %d � positivo", x);
	}
	else if (x < 0){
		printf("o n�mero %d � negativo", x);
	}
	else{
		printf("o n�mero %d � neutro", x);
	}
	return(0);
}