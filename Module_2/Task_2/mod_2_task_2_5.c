#include <stdio.h>

int main(){
	float f,s,quo;
	long sum,mul;
		printf("Please input first number \n");
		scanf("%f",&f);
		printf("Please input second number\n");
		scanf("%f",&s);
			sum=f+s;
			mul=f*s;
			quo=f/s;
		printf("Sum of the numbers %.0f and %.0f is %lu\n",f,s,sum);	
		printf("Product of the numbers %.0f and %.0f is %lu\n",f,s,mul);
		printf("Private of the numbers %.0f and %.0f is %.3f\n",f,s,quo);
	return 0;
}