#include <stdio.h>
#include <assert.h>
#include "kram.h"

int main(void){
	int coun = 0;
	int x,i,j;
	printf("Введите количество неизветсных в уравнении.\n");
	scanf("%d",&x);
	assert(x>0);
	float mat[x][x],s[x];
		printf("Введите коэффциенты системы уравнений.\n");
		for (i=0;i<x;++i){
			for (j=0;j<x;++j){
				printf("mat[%d][%d]=",i+1,j+1);
				scanf("%f",&mat[i][j]);
			}
		}
		printf("Введите свободные члены системы уравнений.\n");
		for (i=0;i<x;++i){
			printf("s[%d]=",i+1);
			scanf("%f",&s[i]);
		}
		for (i=0;i<x;++i){
			for (j=0;j<x;++j){
				printf("%-3.0f ",mat[i][j]);
			}
			printf("%-3.0f\n",s[i]);
		}
		float d=opr(x,mat);
		if (d!=0){
			for  (i=0;i<x;++i){
				printf("x%d=%f\n",i+1,(oprs(x,mat,i,s)/opr(x,mat)));
			}
		}
		else
			printf("Данная система имеет бесконечно большое количество решений.\n");
		printf("%d",coun);
	return 0;
}
