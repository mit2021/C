/*
#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	int number;

	scanf("%d", &number);
	while ( number != -1 ) {
		sum += number;
		count ++;
		scanf("%d", &number);
	}

	double dsum = sum;
	printf("The average is %f.\n", dsum / count);

	return 0;
}
*/


#include <stdio.h>

int main()
{
	int sum = 0;
	int count = 0;
	int number;
	int i=0;
	while(i>=0){
	
	scanf(" %d", &number);           //���ʵ�ֵ�һ��������������ո񣬵�2��3��4...n�����ֿ�����һ�������ո� ; �ո�ᱻ���ԣ� 
	while ( number != -1 ) {
		sum += number;
		count ++;
		scanf(" %d", &number);
	}
	printf("%f\n",1.0*sum/count);   // �ø�������sum������ʵ��ƽ��ֵ�Ը�������ʽ��ʾ 
	//double dsum = sum;
	//printf("The average is %f.\n", dsum / count);
	i++;
	}
	return 0;
}


 
 





