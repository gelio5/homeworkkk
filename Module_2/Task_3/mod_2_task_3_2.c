#include <stdio.h>
#include <string.h>

int main(void){
	int i=1,j=1;
	char strn[10000],strf[10000];
		printf("Please input the string.\n");
		scanf("%s",strn);
			while(i<strlen(strn)){
				if (strn[i]!=strn[i+1]){
					printf("%c",strn[i]);
					i++;
				}
				else{
					i++;
				}
			}
		printf("\n");
	return 0;
}