#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,x1,x2,d;
	printf("Квадратное уравнение имеет вид ax^2+bx+c=0.\nПожалуйста, введите коэффициенты a,b и c.\n");
	scanf("%f %f %f",&a,&b,&c);
	if ((b*b-4*a*c)<0)
		printf("Решений уравнения (%.2f)x^2+(%.2f)x+(%.2f) не существует в пространстве вещественных чисел.\n",a,b,c);
	else{
		d=sqrt(b*b-4*a*c);
		x1=(d-b)/(2*a);
		x2=(-d-b)/(2*a);
		printf("Корнями уравнения (%.2f)x^2+(%.2f)x+(%.2f)=0 являются:\nX1=%.2f\nX2=%.2f\n",a,b,c,x1,x2);
	}
	return 0;
}