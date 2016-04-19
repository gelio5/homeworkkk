#include <stdio.h>
#include <math.h>

float max(float,float,float);
float min(float,float,float);

int main(void){
	float h,s,v,r,g,b;
		printf("Введите координаты цвета в RGB.\n");
		scanf("%f %f %f",&r,&g,&b);
			r/=255;
			g/=255;
			b/=255;
			float cma=max(r,g,b),cmi=(min(r,g,b));
			float cmd=cma-cmi;
			if (cmd==0)
				h=0;
			else
				if (cma==r)
					h=60*(((g-b)/cmd)+6);
				else
					if (cma==g)
						h=60*(((b-r)/cmd)+2);
					else
						h=60*(((r-g)/cmd)+4);
			if (cma==0)
				s=0;
			else
				s=cmd/cma;
			s*=100;
			v=cma;
			v*=100;
		printf("%.0f,%.1f%%,%.1f%% - ",h,s,v);
		if (s==0)
			if (v==0)
				printf("black\n");
			else
				if (v==100)
					printf("white\n");
				else
					printf("gray\n");
		else
			if (h==0)
				printf("red\n");
			else
				if (h<60)
					printf("orange\n");
				else
					if (h==60)
						printf("yellow\n");
					else
						if (h<120)
							printf("olive\n");
						else
							if (h==120)
								printf("green\n");
							else
								if (h<180)
									printf("turquoise\n");
								else
									if (h==180)
										printf("cyan\n");
									else
										if (h<240)
											printf("light blue\n");
										else
											if (h==240)
												printf("blue\n");
											else
												if (h<300)
													printf("indigo\n");
												else
													if (h==300)
														printf("violet\n");
													else
														printf("purple\n");
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