#include <stdio.h>
#include <string.h>

int main(void){
	char chis[10000];
	int i=0,sim;
	float kol,sum=0,sr;
		printf("Введите число.\n");
		scanf("%s",chis);
			kol=strlen(chis);
			while (i<kol) {
				sim=chis[i]-48;
				sum=sum+sim;
				i++;
			}
			sr=sum/kol;
		printf("Количество цифр во введенном числе - %.0f, сумма этих цифр - %.0f, а из среднее арифметическое равно - %.2f\n",kol,sum,sr);
	return 0;
}