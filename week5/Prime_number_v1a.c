//�ж��Ƿ�Ϊ����
#include <stdio.h>

int main()
{
	int x;

	scanf("%d", &x);
	
	int i;
	int isPrime = 1;	//�������ͱ��� isPrime,��ʼֵΪ1�����ڱ������x 
	for ( i=2; i<x; i++ ) {
		if ( x % i == 0 ) {
			isPrime = 0;
			break;
		}
	}
	if ( isPrime == 1 ) {
		printf("������\n");
	} else {
		printf("��������\n");
	}
	return 0;
}
