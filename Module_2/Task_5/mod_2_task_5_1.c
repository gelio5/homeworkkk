#include <stdio.h>
#include <string.h>

void copy(char *,char *);

int main(void){
	char str1[1000],str2[1000];
	int i=0;
	while ((str1[i]=getchar()) !='\n')
		i++;
	str1[strlen(str1)-1]='\0';
	for (i=0;i<strlen(str1)+1;++i)
		copy(&str1[i],&str2[i]);
	printf("%s\n",str2);
	return 0;
}

void copy(char *a,char *b){
	*b=*a;
}