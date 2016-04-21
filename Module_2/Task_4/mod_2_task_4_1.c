#include <stdio.h>
#include <math.h>

float max(float,float,float);
float min(float,float,float);

int main(void){
	float h1,s,r,v1,g,b;
	int v,h;
		printf("Введите координаты цвета в RGB.\n");
		scanf("%f %f %f",&r,&g,&b);
			r/=255;
			g/=255;
			b/=255;
			float cma=max(r,g,b),cmi=(min(r,g,b));
			float cmd=cma-cmi;
			if (cmd==0)
				h1=0;
			else
				if (cma==r)
					h1=60*(((g-b)/cmd)+6);
				else
					if (cma==g)
						h1=60*(((b-r)/cmd)+2);
					else
						h1=60*(((r-g)/cmd)+4);
			if (cma==0)
				s=0;
			else
				s=cmd/cma;
			s*=100;
			v1=cma;
			v=v1*100;
			h=h1;
		printf("%d,%.1f%%,%d%% - ",h,s,v);
		if (s==0)
			switch(v){
				case 0:
					printf("black\n");
					break;
				case 100:
					printf("white\n");
					break;
				default:
					printf("gray\n");
					break;
			}
		else
			if (h%60==0){
				switch(h){
				case 0:
					printf("red\n");
					break;
				case 60:
					printf("yellow\n");
					break;
				case 120:
					printf("green\n");
					break;
				case 180:
					printf("cyan\n");
					break;
				case 240:
					printf("blue\n");
					break;
				case 300:
					printf("indigo\n");
					break;
				}
			}
			else{
					if (h<60)
						printf("orange\n");
					else
						if (h<120)
							printf("olive\n");
						else
							if (h<180)
								printf("turquoise\n");
							else
								if (h<240)
									printf("light blue\n");
								else
									if (h<300)
										printf("indigo\n");
									else
										printf("purple\n");
			}			
	return 0;
}
float max(float r,float g,float b){
	float max;
	if (r>=g & r>=b){
		max=r;
	}else{
		if (g>r & g>=b){
			max=g;
		}else{
			max=b;
		}
	}
	return max;
}
float min(float r,float g,float b){
	float min;
	if (r<=g & r<=b){
		min =r;
	}else{
		if (g<r & g<=b){
			min=g;
		}else{
			min=b;
		}
	}
	return min;
}