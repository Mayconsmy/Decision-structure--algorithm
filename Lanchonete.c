#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int n;
	float qt;
	
	printf("***********************************************\n");
	printf("CÓDIGO DO ITEM * ESPECIFICAÇÃO * PREÇO  UNITÁRIO\n");
	printf("      100      *Cachorro quente*      10,00\n");
	printf("      101      *     Bauru     *      12,00\n");
	printf("      102      *   X-Salada    *      15,00\n");
	printf("      103      *  Hambúrguer   *      18,00\n");
	printf("      104   * Refrigerante(lata) *     5,00\n");
	printf("***********************************************\n"); 
	
	printf("Informe o codigo do item desejado: \n");
	scanf("%d",&n);
	printf("Informe a quantidade de produtos que deseja comprar: \n");
	scanf("%f",&qt);
	
	switch(n){
	case 100:
		printf("Valor a ser pago: %.2f$",qt * 10);
		break;
	case 101:
		printf("Valor a ser pago: %.2f$",qt * 12);
		break;
	case 102:
		printf("Valor a ser pago: %.2f$",qt * 15);
		break;
	case 103:
		printf("Valor a ser pago: %.2f$",qt * 18);
		break;
	case 104:
		printf("Valor a ser pago: %.2f$",qt * 5);
	default:
		printf("Codigo incorreto!");
		break;
	}
	return 0;
}