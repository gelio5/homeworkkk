#include <stdio.h>

int main(void){
	int i=32;
	printf("00 - NUL	01 - SOH	02 - STX	03 - ETX\n");
	printf("04 - EOT	05 - ENQ	06 - ACK	07 - BEL\n");
	printf("08 -  BS	09 -  HT	0A -  LF	0B -  VT\n");
	printf("0C -  FF	0D -  CR	0E -  SO    	0F -  SI\n");
	printf("10 - DLE	11 - DC1	12 - DC2	13 - DC3\n");
	printf("14 - DC4	15 - NAK	16 - SYN	17 - ETB\n");
	printf("18 - CAN	19 -  EM	1A - SUB	1B - ESC\n");
	printf("1C -  FS	1D -  GS	1E -  RS	1F -  US\n");
	while (i<=120){
		printf("%x -  %c 	",i,i);
		++i;
		printf("%x -  %c 	",i,i);
		++i;
		printf("%x -  %c 	",i,i);
		++i;
		printf("%x -  %c\n",i,i);
		++i;
	}
	while (i<127){
		printf("%x -  %c 	",i,i);
		i++;
	}
	printf("7F - DEL\n");
	return 0;
}