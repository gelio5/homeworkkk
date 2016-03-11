#include <stdio.h>

int main(){
	printf("Недопустимые символы при именовании переменных: \n");
	printf("1) E[0-9]*  2) E[A-Z]*	3) is[a-z]* \n");
	printf("4) LC[A-Z]*  5) mem[a-z]*  6) NDEBUG \n");
	printf("7) Offsetoff  8) raise	9) SIG[A-Z]* \n");
	printf("10) str[a-z]*  11) to[a-z]*  12) wcs[a-z]* \n13)_*\n");
	printf("Где '*' - звездочка, означает любой символ.");
return 0;	
}