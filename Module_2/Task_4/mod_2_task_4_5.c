#include <stdio.h>
#include <assert.h>
#include <math.h>

int main(void){
	float a,b,c,d,f1,f2;
	char z1,z2,z3;
		printf("Введите комплексное сопротивление первого элемента\n");
			scanf("%f%c%f%c",&a,&z1,&b,&z2);
			if (z1=='-')
				b=-b;
		printf("Введите комплексное сопротивление второго элемента\n");
			scanf("%f%c%f%c",&c,&z3,&d,&z2);
			if (z3=='-')
				d=-d;				
		f1=((a+c)*(a*c-b*d)+(b+d)*(a*d+c*b))/(pow((a+c),2)+pow((b+d),2));
		f2=-((b+d)*(a*c-b*d)-(a+c)*(a*d+c*b))/(pow((a+c),2)+pow((b+d),2));
		printf("Общее комплексное сопротивление равно %.3f+(%.3f)i\n",f1,f2);
	return 0;
}