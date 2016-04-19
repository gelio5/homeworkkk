#include <stdio.h>
int main(void){
	printf("Переменная типа int занимает %zd байт(ов) памяти \n", sizeof(int));
	printf("Переменная типа char занимает %zd байт(ов) памяти \n", sizeof(char));
	printf("Переменная типа long занимает %zd байт(ов) памяти \n", sizeof(long));
	printf("Переменная типа long long занимает %zd байт(ов) памяти \n", sizeof(long long));
	printf("Переменная типа double занимает %zd байт(ов) памяти \n", sizeof(double));
	printf("Переменная типа long double занимает %zd байт(ов) памяти \n", sizeof(long double));
	printf("Переменная типа float занимает %zd байт(ов) памяти \n", sizeof(float));
	return 0;
}