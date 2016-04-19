#include <stdio.h>

int main(void){
	int el=145,c=2531,m=11979,a=430,i=1,k;
		printf("Введите количество элементов последовательности.\n");
		scanf("%d",&k);
			while (i<=k) {
				el=((a*el+c)%m);
				printf("%d ", el);
				i++;
			}
		printf("\n");
	return 0;
}