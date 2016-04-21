#include <stdio.h>
#include <assert.h>

long int fibo(long int);

int main(void){
	long int k,i;
	printf("Введите количество чисел ряда, которые вы хотите получить.\n");
	scanf("%lu",&i);
	for (k=0;k<i;++k){
		printf("%lu ",fibo(k));
	}
	printf("\n");
	return 0;	
}

long int fibo(long int i){
		if (i==0)
			return 0;
		else
			if (i==1)
				return 1;
			else
				return (fibo(i-1)+fibo(i-2));
}