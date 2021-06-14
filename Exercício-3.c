#include<stdio.h>
#include<string.h> 
#include<ctype.h> 
#include<locale.h> 
#include<stdlib.h> 

int main(){
	
	int contadormas=0, contadorfe=0, menoralturamasc=30000,menoralturafe=30000,sexo;
	int feminino=0, masculino=0,maioralturafem,maioralturamasc,alturafeminina,alturamasculina, media;
	int somafeminina, i;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------\n");
	printf("Analizador\n");
	printf("----------\n");
	
		for(i=0;i<10;i++){
			
			printf("\n");
			printf("Escolha de sexo\n");
			printf("[1] Feminino\n");
			printf("[2] Masculino\n");
			printf("Digite o sexo desejado: ");
			
				while(scanf("%d",&sexo)!=1){
					while(getchar()!='\n');
				}
				
				switch(sexo){
					
					case 1:
						feminino = feminino + 1;
					break;
				
					case 2:
						
						masculino = masculino + 1;
					break;
		}
		fflush(stdin);
	}
		
		printf("\n");
		
if(feminino>0){	
	do{
		printf("A altura da mulher: ");
			scanf("%d",&alturafeminina);
			fflush(stdin);
			maioralturafem = alturafeminina;
			if(alturafeminina>maioralturafem){
				maioralturafem = alturafeminina;
			}
			if(alturafeminina<menoralturafe){
				menoralturafe = alturafeminina;
			}
			somafeminina = somafeminina + alturafeminina;
			contadorfe = contadorfe + 1;
	}while(contadorfe<feminino)	;
}

printf("\n");

if(masculino>0){
	while(contadormas<masculino){
		printf("A altura do homem: ");
		scanf("%d",&alturamasculina);
		fflush(stdin);
		maioralturamasc = alturamasculina;
		if(alturamasculina > maioralturamasc){
			maioralturamasc = alturamasculina;
		}
		if(alturamasculina<menoralturamasc){
			menoralturamasc = alturamasculina;
		}
		fflush(stdin);
		contadormas = contadormas + 1;
	}
}

printf("\n");

media = somafeminina/feminino;
printf("Quantidade de homens: %d\n",masculino);
printf("A média da altura das mulheres é: %d\n",media);
if(maioralturamasc>maioralturafem){
	printf("A maior altura do grupo é : %d\n",maioralturamasc);
}else if(maioralturafem>maioralturamasc){
	printf("A maior altura do grupo é: %d\n",maioralturafem);
}
if(menoralturafe<menoralturamasc){
	printf("A menor altura do grupo é: %d",menoralturafe);
}else if(menoralturamasc<menoralturafe){
	printf("A menor altura do grupo é: %d",menoralturamasc);
}
	return 0;
}
