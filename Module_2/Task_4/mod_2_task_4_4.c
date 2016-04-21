#include <stdio.h>
#define max(ch1,ch2) ((ch1>=ch2)?ch1:ch2)

void sravp(int);

int main(void){
	int n;
	printf("Введите количество пар.\n");
	scanf("%d",&n);
	sravp(n);
	return 0;
}
void sravp(int n){
	int ch1,ch2,el=145,c=2531,m=11979,a=430,i=1,k;
	k=2*n;
	while (i<=k) {
				el=((a*el+c)%m);
				ch1=el;
				ch2=((a*el+c)%m);
				el=ch2;
				printf("%d   %d - ",ch1,ch2);
				printf("%d\n",max(ch1,ch2));
				i+=2;
			}
}