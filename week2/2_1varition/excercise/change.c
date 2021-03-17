# include <stdio.h>

int main()
{
	const int PocketMoney = 100 ;                   //定义常量 PocketMoney 
	int GoodPrice = 0 ;
	int change = 0 ;
	
	printf("请输入消费总金额：\n");
	
	scanf("%d", &GoodPrice);
	
	change = PocketMoney - GoodPrice ;
	
	printf("找您%d元.\n", change);
	
	return 0;                                      //初始化 
	
}
