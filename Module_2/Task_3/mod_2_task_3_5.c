#include <stdio.h>

int main(void){
	int x1,x2,x3,y1,y2,y3,a,b,c;
		printf("Введите координаты первой точки.\n");
		scanf("%d",&x1,&y1);
		printf("Введите координаты второй точки.\n");
		scanf("%d %d",&x2,&y3);
		printf("Введите координаты третьей точки.\n");
		scanf("%d %d",&x3,&y3);
		a=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		b=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		c=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		if (a==(b+c) & b==(a+c) & c==(b+a)){
			printf("Треугольник с вершинами в данных точках прямоугольный\n");}
			else{
				printf("Треугольник с вершинами в данных точках не прямоугольный\n");
			
		}	
	return 0;
}