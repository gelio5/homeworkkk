#include <stdio.h>

int main(){
	int k,i;
	printf("Пожалуйста, введите число, факториал которого вы хотите узнать\n");
	 scanf("%d",&k);
	 long long f=1;
	 if  (k<21){
	 		for( i=1;  i<k+1; i++ ){
	 		f=f*i;
	 	}
	 	printf("Факториал числа %d равен %llu\n",k,f);
	 }
	 	else {printf("Факториал числа %d превышает допустимый числовой формат данных\n", k);
	 	}		
 return 0;
}