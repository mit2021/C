#include <stdio.h>
#include <math.h>
int main() 
{
	int a;                           //���������ݼ���ƽ��ֵ
	int b;
	double c;
	
	printf("�������������ݼ���ƽ��ֵ\n");
	
	printf("���������������ݣ����Կո��������\"10 20\"\n");
	
	scanf("%d %d",&a,&b);
	
	c = sqrt(a*b);
	
	printf("����������%d��%d�ļ���ƽ��ֵΪ%f",a,b,c);
	
	return 0;
 } 
