#include<stdio.h>

int main()
{
	int i;
	int f[20]={1,1};	//�����������飬��1��2���Ϊ1 

	for(i=2;i<20;i++)	//ѭ���ṹforΪ���������3��20�ֵ 
		f[i]=f[i-2]+f[i-1];

	for(i=0;i<20;i++)
		{
			if(i%5==0) printf("\n");
			printf("%12d",f[i]);	//�������Ԫ��ֵ��ÿ��ֵռ12�����Ҷ��� 
		}
	printf("\n");
	return 0;
}


