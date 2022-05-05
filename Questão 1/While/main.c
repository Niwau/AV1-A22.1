#include <stdio.h>

int main(){
	int n;
	int i = 1;
	int j = 1;
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	
	
	while(i <= n){
		while(j <= i){
			printf("%d ", j);
			j++;
		}
		printf("\n", j);
		i++;
		j = 1;
	}
}
