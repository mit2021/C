#include<stdio.h>

void PrintN(int N)		//���庯�� PrintN 
{
	int i;
	for(i=1;i<=N;i++)	//���� 1 ~ N �������  i 
		printf("%d\n",i);
	return;
}

int main()
{
	int N;
	scanf("%d",&N);		//������������ N 
	PrintN(N);			//���� PrintN  ���� 
	return 0;
}
