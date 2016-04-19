#include <stdio.h>
#include <string.h>

int main(void){
	char izm[10000];
	int i=0,b;
			printf("Введите стороку длиной до 10000 символов.\n");
		scanf("%s",izm);
		b=strlen(izm);
			while (i<(b+1)) {
				if (izm[i]>96) {
					if (izm[i]<123) {
						izm[i]-=32;
					}
				}
			i++;
			}
			printf("%s\n",izm);
	return 0;
}
