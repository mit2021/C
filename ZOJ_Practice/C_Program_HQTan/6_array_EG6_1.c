#include<stdio.h>

int main()
{
	int i,a[10];		//�������ͱ���i ����������a  
	for(i=0;i<=9;i++)	//ѭ��forΪ����Ԫ�ظ�ֵ 
		a[i]=i;
	for(i=9;i>=0;i--)	//ѭ��for ������Ԫ��������� 
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
