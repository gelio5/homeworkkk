#include <stdio.h>
#include <string.h>

void copy(char *,char *);

int main(void){
	char str1[1000],str2[1000];
	int i=0,a,j;
	while ((str1[i]=getchar()) !='\n')
		i++;
	str1[strlen(str1)-1]='\0';
	j=strlen(str1)-1;
	printf("If you need to invert string, please input 1.\nIf you don`t need it input 0\n");
	scanf("%d",&a);
	if (a==0){
		for (i=0;i<strlen(str1)+1;++i)
			copy(&str1[i],&str2[i]);	
	}else{
		if (a==1){
			i=0;
			while (str1[i]!='\0'){
				copy(&str1[i],&str2[j]);
				++i;
				--j;
			}
		}	
		
	}
	str2[strlen(str1)]='\0';
	printf("%s\n",str2);
	return 0;
}

void copy(char *a,char *b){
	*b=*a;
}