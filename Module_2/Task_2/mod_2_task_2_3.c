#include <stdio.h>
#include <string.h>

int main(void){
	char stroka[10000];
	int i;
		printf("Введите строку длиной до 10000 символов.\n");
		scanf("%s",stroka);
		i=strlen(stroka)+1;
		printf("Размер введенной вами строки составляет %d байт(ов)\n",i);
	return 0;
}