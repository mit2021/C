#include <stdio.h>

int main()
{	
	printf("����ĳ������24Сʱ��ʱ�Ƶ���ʱ����ʱ��\n");
	int hour1, minute1;
	int hour2, minute2;
	printf("����������D1�ĵ�һ��ʱ��㣬����8:30�֣�������8 30��\n");
	scanf("%d %d", &hour1, &minute1);
	printf("����������D1�ĵڶ���ʱ��㣬����18:30�֣�������18 30��\n");
	scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2-t1;

	printf("ʱ�����%dСʱ%d�֡�", t/60, t%60);
	
	return 0;
}
