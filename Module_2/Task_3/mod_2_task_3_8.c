#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,res;
	char oper;
	scanf("%f%c%f",&a,&oper,&b);
	 if (oper=='+'){
	 	res=a+b;
	 }
	 else{
	 	if (oper=='-'){
	 		res=a-b;
	 	}else{
	 		if (oper=='*'){
	 			res=a*b;
	 		}else{
	 			if (oper=='/'){
	 				res=a/b;
	 			}else{
	 				if (oper=='%'){
	 					res=0.01*a*b;
	 				}else{
	 					if (oper=='^'){
	 						res=pow(a,b);
	 					}
	 				}
	 			}
	 		}
	 	}
	 }
	 printf("%.2f\n",res);
	 return 0;
}