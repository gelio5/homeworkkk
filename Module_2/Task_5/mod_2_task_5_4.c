#include <stdio.h>

void test(char *);

int main(void){
	char s[1000];
		fgets(s,1000,stdin);
		test(s);
	return 0;
}

void test(char *str){
	int od=0,dv=0,ap=0,i=-1,k=0;
	char a[1000];
		for (;*str;++str){
			switch (*str){
				case '(':
					++i;
					a[i]='(';
					break;
				case '[':
					++i;
					a[i]='[';
					break;
				case '{':
					++i;
					a[i]='{';
					break;
				case '<':
					++i;
					a[i]='<';
					break;
				case '"': 	
					++dv;
					if (dv%2==1){
						++i;
						a[i]='"';
					}
					else
					{
						if (i!=-1){
							if (a[i]=='"')
								--i;
						}
						else
							++k;
					}						
					break;
				case '`':
					++ap;
					if (ap%2==1){
						++i;
						a[i]='`';
					}
					else
					{
						if (i!=-1){
							if (a[i]=='`')
								--i;
						}
						else
							++k;
					}
					break;
				case '\'':
					++od;
					if (od%2==1){
						++i;
						a[i]='\'';
					}
					else
					{
						if (i!=-1){
							if (a[i]=='\'')
								--i;
						}
						else
							++k;
					}
					break;
				case ')':
					if (i!=-1){
						if (a[i]=='(')
							--i;
					}
					else
						++k;
					break;
				case ']':
					if (i!=-1){
						if (a[i]=='[')
							--i;
					}
					else
						++k;
					break;
				case '}':
					if (i!=-1){
						if (a[i]=='{')
							--i;
					}
					else
						++k;
					break;
				case '>':
					if (i!=-1){
						if (a[i]=='<')
							--i;
					}
					else
						++k;
					break;
			}
		}
		if(i==-1 && k==0)
			printf("Balance observed.\n");
		else
			printf("Balance isn`t met.\n");
}