#include <stdio.h>

int main(void){
	int i=1,pr;
	printf("Введите прогресс в процентах.\n");
	scanf("%d",&pr);
	printf("[");
	while (i<pr){
		printf("|");
		i++;
	}
	printf("]%d%%\n",pr);
	return 0;
}