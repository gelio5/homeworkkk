#include <stdio.h>

void copy(char *,char *);

int main(void){
	char str1[1000],str2[1000];
	gets(str1);
	copy(&str1[0],&str2[0]);
	printf("%s\n",str2);
	return 0;
}

void copy(char *a,char *b){
	do{
		*b=*a;
		++a;
		++b;
	}while(*a!=0);
	*b=0;
}