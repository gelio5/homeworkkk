#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,res;
	char oper;
	scanf("%f%c%f",&a,&oper,&b);
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
			res=a/b;
			break;
		case '%':
			res=0.01*a*b;
			break;
		case '^':
			res=pow(a,b);
			break;
	}
	printf("%.2f\n",res);
	return 0;
}