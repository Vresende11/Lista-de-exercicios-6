#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float meses,meses24,feminino,masculino,fcriancas,ano,quantidade,i;
	float porcentagemmasculino,porcentagem24,porcentagemftotais;
	char sexo;
	
	printf("----------------------------\n");
	printf("Taxa de Mortalidade Infantil\n");
	printf("----------------------------\n");
	
	printf("Digite o ano do nascimento da crian�as:  ");
		scanf("%d",&ano);
	printf("Digite a quantidade de crian�as que nasceram nesce per�odo: ");
		scanf("%f",&quantidade);
	printf("Quantidade de crian�as que morreram no per�odo: ");
		scanf("%f",&fcriancas);
		
	for(i=0;i<fcriancas;i++){
		
		fflush(stdin);
		printf("\n");
		printf("Qual o sexo da crian�a: ");
			scanf("%c",&sexo);
			sexo=toupper(sexo);
			
			if(sexo=='F'){
				feminino = feminino + 1;
				printf("Quantos meses a crian�a viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			else if(sexo=='M'){
				masculino = masculino + 1;
				printf("Quantos meses a crian�a viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			
	}
	
	printf("\n");
	
	porcentagemftotais = (fcriancas/quantidade)*100;
	porcentagemmasculino = (masculino/fcriancas)*100;
	porcentagem24 = (meses24/fcriancas)*100;
	
	printf("Porcentagem de crian�as falecidas no per�odo: %.1f\n",porcentagemftotais);
	printf("Porcentagem de crian�as masculinas mortas no per�odo: %.1f\n",porcentagemmasculino);
	printf("Porcentagem de crian�as que viveram menos 24 ou menos de 24 meses: %.1f\n",porcentagem24);
	return 0;
}
