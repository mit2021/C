#include <stdio.h>

int main()
{	
	printf("计算某日期以24小时计时制的两时间点的时间差。\n");
	int hour1, minute1;
	int hour2, minute2;
	printf("请输入日期D1的第一个时间点，例如8:30分，则输入8 30：\n");
	scanf("%d %d", &hour1, &minute1);
	printf("请输入日期D1的第二个时间点，例如18:30分，则输入18 30：\n");
	scanf("%d %d", &hour2, &minute2);

	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;

	int t = t2-t1;

	printf("时间差是%d小时%d分。", t/60, t%60);
	
	return 0;
}
