#include <stdio.h>
#include <assert.h>

void fibo(int);

int main(void){
	int i;
	printf("Введите количество чисел ряда, которые вы хотите получить.\n");
	scanf("%d",&i);
	fibo(i);
	return 0;	
}

void fibo(int i){
	int l=0,m=1,fib;
	assert(i>0);
	if (i==1)
		printf("%d",l);
	else
		if (i==2)
			printf("%d %d",l,m);
		else{
			printf("%d %d ",l,m);
			for (int k=1;k<=(i-2);++k){
		fib=l+m;
		l=m;
		m=fib;
		printf("%d ",m);
			}
		}
	printf("\n");
}