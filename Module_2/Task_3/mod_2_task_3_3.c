#include <stdio.h>

int main(void)
{
	int a,b,c,d;
		printf("Please input first tale.\n");
		scanf("%d",&a);
		c=a;
		printf("Please input second tale.\n");
		scanf("%d",&b);
		d=b;
			while (a !=0 & b!=0){
				if (a>b)
					a=a%b;
				else
					b=b%a;
			}
		printf("The greatest common divisor of %d and %d is %d.\n",c,d,a+b);
	return 0;
}																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																