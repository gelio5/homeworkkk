#include <stdio.h>
#include <string.h>

int main(void){
	int j=1,i;
	char strn[10000],strf[10000];
		printf("Please input the string.\n");
		gets(strn);
		while (i<(strlen(strn))){
			if (strn[i+1]!=strn[i]){
				printf("%c",strn[i]);
				++i;
			}else
			while (strn[i]==strn[i+1]){
				++i;
			}
		}
	printf("\n");
	return 0;
}