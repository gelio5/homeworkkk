#include <stdio.h>

int main(){
	int iday,fday,month,year;
		printf("Please, input initial amount of days \n");
		scanf("%d",&iday);
			year=iday/365;
			fday=iday%365;
			month=fday/30;
			fday=fday%30;
		printf("%d days it`s %d years, %d monts and %d days",iday,year,month,fday);
	return 0;
	}
