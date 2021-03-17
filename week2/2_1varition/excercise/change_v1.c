#include <stdio.h>

int main()
{
	const int AMOUNT = 100;             //定义常量 AMOUNT 
	int price = 0;

	printf("请输入金额（元）：");
	scanf("%d", &price);               // 由键盘读入值 

	int change = AMOUNT - price;

	printf("找您%d元。\n", change);

	return 0;                          // 初始化 
}
