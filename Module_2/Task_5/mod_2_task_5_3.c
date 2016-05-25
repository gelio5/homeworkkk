#include <stdio.h>
#include <string.h>

int main(void){
	char s[1000];
	int a[95],k=0,n,i;
	for (i=0;i<95;++i) /*Зануление элементов массива(все символы имеются в количестве ноль*/
		a[i]=0;
	fgets(s,1000,stdin);
	s[strlen(s)-1]='\0';/*Считывание строки*/
	i=0;
	while (s[i]!='\0'){/*Обработка строки на поиск элементов*/
		++a[s[i]-32];
		++i;}
	for (i=1;i<=95;++i){
		k=0;
		n=0;
		while (k<95){ //нахожение максимума
			if (a[k]>n)
				n=a[k];
				++k;
		}
		k=0;
		while (k<95){	//печать символов в нужном порядке
			if (a[k]==n && n>0){
				putchar(k+32);
				a[k]=0;
				++k;
			}
			else
				++k;
		}
	}
	printf("\n");	
	return 0;
}