#include <stdio.h>

int main(){
	int numero10 = 0, numero20 = 0, numero30 = 0;
	int numero_escolhido;
	int valores_totais = 0;
	int parar_loop = 0;
	int i = 0;
	int maior;
	int numerador, denominador = 0;
	float media;
	
	while(parar_loop == 0){
		printf("Insira um valor inteiro: ");
		scanf("%d", &numero_escolhido);
		
		valores_totais++;
		
		/* == Parando o loop caso o usuário insira os números 10, 20 e 30 durante a execução do programa. == */
		if(numero_escolhido == 10){
			numero10 = 10;
			
		} else if(numero_escolhido == 20 && numero10 == 10){
			numero20 = 20;
			
		} else if(numero_escolhido == 30 && numero10 == 10 && numero20 == 20){
			parar_loop = 1;
		}
		
		/* == Verificando maior número entre 10 e 20 == */
		if(numero10 == 10 && numero20 == 0){
				
			if(i == 1){
				maior = numero_escolhido;
				
			} else if(numero_escolhido > maior){
					maior = numero_escolhido;
			}
			
			i++;
		}
		
		/* == Tirando a média de todos os elementos pares lidos antes da ocorrência de 10. == */
		
		if(numero10 == 0){
			if(numero_escolhido % 2 == 0){
				denominador++;
				numerador += numero_escolhido;
			}
		}
	}
	
	media = (float) numerador / denominador;
	
	printf("\nTotal de valores fornecidos: %d\n", valores_totais);
	printf("Maior numero forncecido entre a ocorrencia de 10 e 20: %d\n", maior);
	printf("Media dos valores pares lidos antes da ocorrencia de 10: %.2f\n", media);
}
