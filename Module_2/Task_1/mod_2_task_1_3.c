#include <stdio.h>

int main(){
	int day;	// Day of birth
	int month;	//Month of birth	
	int buf;	//Buffer of exchange
		day=15;
		month=5;
		printf("Before exchanging: day = %d, month = %d,\n ", day, month);	//output initial variables
			buf=day;
			day=month;
			month=buf;
		printf("After exchanging: day = %d, month = %d", day, month);	//output final variables
	return 0;
}