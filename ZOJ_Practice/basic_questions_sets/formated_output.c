#include<stdio.h>

int main()
{
	float a1=0;                            //���帡���� a1
	float a2=0;								//���帡���� a2 
	int   b=0; 								//�������ͱ��� b 
	char  c=0;
	
	scanf("%f %d %c %f",&a1,&b,&c,&a2);
	printf("%c %d %4.2f %4.2f",c,b,a1,a2);
	
	return 0;
 } 
 
 
 
/*
#include<stdio.h>

int main()
{
	float a1=0;                            //���帡���� a1
	float a2=0;								//���帡���� a2 
	int   b=0; 								//�������ͱ��� b 
	char  c=0;
	
	scanf("%f %d %c %f",&a1,&b,&c,&a2);		//�����Կո�ָ���������ʱ�� scanf�����޿ո񣬽����������
	printf("%c %d %4.2f %4.2f",c,b,a1,a2);  // %4.2f���帡����ռ4�У�С���������λС���� printf ���� ��ͬ���ݼ��Կո�ָ������
	
	return 0;
 } 
 */
