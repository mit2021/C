# include <stdio.h>

int main()
{
	const int PocketMoney = 100 ;                   //���峣�� PocketMoney 
	int GoodPrice = 0 ;
	int change = 0 ;
	
	printf("�����������ܽ�\n");
	
	scanf("%d", &GoodPrice);
	
	change = PocketMoney - GoodPrice ;
	
	printf("����%dԪ.\n", change);
	
	return 0;                                      //��ʼ�� 
	
}
