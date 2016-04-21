#include <stdio.h>
#include <assert.h>

int main(void){
	int i=1,pr;
	printf("Введите прогресс в процентах.\n");
	scanf("%d",&pr);
	assert(pr>=0 && pr<=100);
	printf("[");
	if (pr%10!=0){
		while (i<=pr){
			printf("#");
			++i;
		}
		i=1;
		while (i<=(100-pr)){
			printf("_");
			++i;
		}
	}else{
		while (i<=(pr/10)){
			printf("#");
			++i;
		}
		i=1;
		while (i<=(10-pr/10)){
			printf("_");
			i++;
		}
	}
	printf("]%d%%\n",pr);
	return 0;
}