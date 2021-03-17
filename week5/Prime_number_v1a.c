//判断是否为素数
#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);
	
	int i;
	int isPrime = 1;	//定义整型变量 isPrime,初始值为1，用于标记素数x 
	for ( i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		printf("是素数\n");
	} else {
		printf("不是素数\n");
	}
	return 0;
}
