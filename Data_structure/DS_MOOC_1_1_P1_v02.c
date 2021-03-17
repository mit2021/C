#include<stdio.h>

void PrintN(int N)		//定义函数 PrintN 
{
	int i;
	for(i=1;i<=N;i++)	//遍历 1 ~ N ，并输出  i 
		printf("%d\n",i);
	return;
}

int main()
{
	int N;
	scanf("%d",&N);		//读入整型数据 N 
	PrintN(N);			//调用 PrintN  函数 
	return 0;
}
