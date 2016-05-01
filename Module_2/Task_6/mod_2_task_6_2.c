#include <stdio.h>
#include <stdlib.h>

int main (void){
	FILE *input;
   	FILE *output;
	unsigned char element,j,key=167;
    char in[10],out[10];
    	printf("Please input name of input file.\n");
    	scanf("%s",in);
    	printf("Please input name of output file.\n");
    	scanf("%s",out);
    	input=fopen(in,"rb");
    	output=fopen(out, "wb");
    	do{
  			if (fread(&element, 1, 1, input)) {
   			j = element^key;
   			fwrite(&j, 1, 1, output);
   		}
		}while (feof(input) == 0);
    	fclose(input);
    	fclose(output);
	return 0;
}