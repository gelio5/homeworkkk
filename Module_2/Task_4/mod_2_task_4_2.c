#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

int main(void){
	float a,b,res;
	char oper;
	scanf("%f%c%f",&a,&oper,&b);
	assert(a>=FLT_MIN);
	assert(a<=FLT_MAX);
	assert(b>=FLT_MIN);
	assert(b<=FLT_MAX);
	switch(oper){
		case '+':
			res=a+b;
			break;
		case '-':
			res=a-b;
			break;
		case '*':
			res=a*b;
			break;
		case '/':
			assert(b!=0);
			res=a/b;
			break;
		case '%':
			res=0.01*a*b;
			break;
		case '':
			res=pow(a,b);
			break;
	}
	printf("%.2f\n",res);
	return 0;
}