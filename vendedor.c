#include <stdio.h>
#include <locale.h>
/*Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia.
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas,
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos
anteriormente.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float n1;  
	printf("Informe quantas maçãs foram compradas: ");
	scanf("%f",&n1);
	if(n1 < 12){
		printf("Você deve pagar: %.2f$",n1 * 1.3);
	}
	else{
		printf("Você deve pagar: %.2f$",n1 * 1.1);
	}
	return(0);
}