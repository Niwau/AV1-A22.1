#include <stdio.h>

int main(){
	int numero_escolhido = 0;
	int numero_escolhido_copia;
	int numerador = 0;
	int algarismo_atual;
	int i;
	float media;
		
	while (numero_escolhido <= 0 || numero_escolhido >= 10000){
		printf("Insira um valor positivo e inferior a 10000: ");
		scanf("%d", &numero_escolhido);
		
		if(numero_escolhido <= 0 || numero_escolhido >= 10000){
			printf("Valor invalido.\n");
			
		} else {
			numero_escolhido_copia = numero_escolhido;
			
			for(i = 0; (float) numero_escolhido_copia / 10 > 0; i++){
				algarismo_atual = numero_escolhido_copia % 10;
				numero_escolhido_copia = numero_escolhido_copia / 10;
				numerador += algarismo_atual;
			}
			
			media = (float) numerador / i;
			printf("Media dos algarismos: %.2f", media);
		}
	}
	
	
}
