#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char numero[30];
	printf("Digite um n�mero inteiro positivo: ");
	fgets(numero, 30, stdin);
	
	int contagem = sizeof numero;

	
	printf("O n�mero digitado tem %s digitos.", contagem);	
	
}
