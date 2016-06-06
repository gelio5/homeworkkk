#include <stdio.h>

void copy(char *,char *);
void invert(char *,char *);

int main(void){
	char str1[1000],str2[1000];
	int i=0,a,j;
	gets(str1);
	printf("If you need to invert string, please input 1.\nIf you don`t need it input 0\n");
	scanf("%d",&a);
	if (a==0)
		copy(&str1[0],&str2[0]);else{
		if (a==1)
			invert(&str1[0],&str2[0]);
		}	
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

void invert(char *a,char *b){
	int i=0,k=0;
	char *c;
		c=a;
		while (*c!=0){
			c++;
			i++;
		}
		i--;
		while (a[k]){
			*b=*(a+i);
			--i;
			++k;
			++b;
		}
		*b=0;
}