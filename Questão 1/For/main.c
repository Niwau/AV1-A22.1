#include <stdio.h>

int main(){
	int n, i,j;
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}
