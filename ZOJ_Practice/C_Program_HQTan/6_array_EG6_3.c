#include<stdio.h>

int main()
{
	int a[10];
	int i,j,t;
	printf("input 10 numbers :\n");
	for(i=0;i<10;i++)	//ѭ���ṹfor ��ȡ���ݲ��洢 
		scanf("%d",&a[i]);
	printf("\n");
	for(j=0;j<9;j++)	//�ظ������ܼ�9�Σ�����ÿ�� 
	 for(i=0;i<9-j;i++)	// ÿ���ڱ�������Ԫ�� 
	  if(a[i]>a[i+1])
	  	{t=a[i];a[i]=a[i+1];a[i+1]=t;}	//�����жϣ���ǰһ����ں�һ�������ֵ���� 
	printf("the sorted numbers :\n");
	for(i=0;i<10;i++)	//ѭ���ṹ���sorted �������Ԫ�� 
		printf("%d",a[i]);	
	printf("\n");
	return 0;
 } 
