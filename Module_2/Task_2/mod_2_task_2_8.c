#include <stdio.h>

int main(void){
	float u0,alf,t,gr,si;
		printf("В чем будет вводится угол, если в градусах, введите 0, если в радианах, введите 1.\n");
		scanf("%f", &gr);
		printf("Введите угол над горизонтом.\n");
		scanf("%f", &alf);
		printf("Введите начальную скорость.\n");
		scanf("%f",&u0);
		if (gr<1){
			alf=(alf*3.14159265359)/180;
		}
		si=alf-(alf*alf*alf)/6+(alf*alf*alf*alf*alf)/120-(alf*alf*alf*alf*alf*alf*alf)/5040;
		t=(2*u0*si)/9.8;
		printf("Время полета при скорости %.0f м/c и угле в %.2f радиан составит %.2f секунд.\n", u0,alf,t);
	return 0;
}