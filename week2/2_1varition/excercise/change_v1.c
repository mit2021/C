#include <stdio.h>

int main()
{
	const int AMOUNT = 100;             //���峣�� AMOUNT 
	int price = 0;

	printf("�������Ԫ����");
	scanf("%d", &price);               // �ɼ��̶���ֵ 

	int change = AMOUNT - price;

	printf("����%dԪ��\n", change);

	return 0;                          // ��ʼ�� 
}
