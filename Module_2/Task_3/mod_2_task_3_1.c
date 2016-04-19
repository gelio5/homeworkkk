#include <stdio.h>
#include <string.h>

int main(void){
	int i=1,n=0;
	char s[10000];
		printf("Please, input the string\n");
		scanf("%s",s);
			while (i<=strlen(s)){
				if (s[i]>n)
					n=s[i];
				i++;
			}
		printf("%c\n",n);
	return 0;
}