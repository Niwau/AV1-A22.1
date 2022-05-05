#include <stdio.h>

int main(){
	int n;
	int i = 1;
	int j = 1;
	printf("Insira um numero inteiro: ");
	scanf("%d", &n);
	
	do{
		do{
			printf("%d ", j);
			j++;
		}
		while(j <= i);
		printf("\n", j);
		i++;
		j = 1;
	}
	while(i <= n);
}
